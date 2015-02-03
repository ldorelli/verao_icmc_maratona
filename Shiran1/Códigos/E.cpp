#include <iostream>

using namespace std;

#define LL long long

LL c;
LL v[20];
int n;

LL f(int i, LL t)
{
	if (i == n)
		return 0;
	LL ret = f(i+1, t);
	if (t+v[i] <= c)
		ret = max(ret, v[i]+f(i+1,t+v[i]));
	return ret;
}

int main()
{
	while (cin >> n >> c)
	{
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		cout << f(0, 0) << "\n";
	}
	return 0;
}
