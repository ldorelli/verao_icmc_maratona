#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> v[10000];

int main()
{
	cin.sync_with_stdio(false);
	int n, m;
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; ++i)
			cin >> v[i].first >> v[i].second;
		sort(v, v+n);
		int res = 1;
		int range;
		int i;
		for (i = 0; v[i].first == 0 && i < n; ++i)
			range = v[i].second;
		i++;
		int best = i;
		while (i < n && range < m)
		{
			if (!(v[i].first <= range && v[i].second >= range))
			{
				range = v[best].second;
				res++;
				best = i+1;
			}
			else if (v[best].second < v[i].second)
				best = i;
			i++;
		}
		if (range < m)
			res++;
		cout << res << endl;
	}
	return 0;
}
