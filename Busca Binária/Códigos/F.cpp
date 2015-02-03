#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1000000000

bool p[1000001];
vector<int> v;
int a, b, k;

bool check(int l)
{
	int pos = lower_bound(v.begin(), v.end(), a) - v.begin();
	for (int i = a; i <= b - l + 1; ++i)
	{
		if (pos < v.size())
			pos = v[pos] < i ? pos + 1 : pos;	
		int pos2 = pos + k - 1;
		if (pos2 >= v.size() || v[pos2] > i + l - 1)
			return false;	
	}
	return true;
}

int main()
{
	cin.sync_with_stdio(false);
	for (int i = 2; i < 1001; ++i)
	{
		if (p[i])
			continue;
		for (int j = i + i; j < 1000001; j += i)
			p[j] = true;
	}
	for (int i = 2; i < 1000001; ++i)
	{
		if (!p[i])
			v.push_back(i);
	}
	while (cin >> a >> b >> k)
	{
		int low = 1;
		int high = b - a + 1;
		while (high - low > 1)
		{
			int l = (high + low) / 2;
			if (check(l))
				high = l;
			else
				low = l;
		}
		if (check(low))
			cout << low << "\n";
		else if (check(high))
			cout << high << "\n";
		else
			cout << -1 << "\n";
	}
	return 0;
}
