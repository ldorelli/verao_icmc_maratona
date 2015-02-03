#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define LL long long

int gr[1000];
int ng;
int n, m;

void unio(int i, int j)
{
	int z = gr[j];
	for (int k = 0; k < n; ++k)
	{
		if (gr[k] == z)
			gr[k] = gr[i];
	}
}

int main()
{
	cin.sync_with_stdio(false);
	while (cin >> n >> m)
	{
		priority_queue<pair<LL, pair<int, int> > > pq;
		ng = n;
		for (int i = 0; i < n; ++i)
			gr[i] = i;
		for (int i = 0; i < m; ++i)
		{
			LL a, b, c;
			cin >> a >> b >> c; a--; b--;
			pq.push(make_pair(-c, make_pair(a, b)));
		}
		LL res = 0;
		while (ng > 1)
		{
			pair<LL, pair<int, int> > pp = pq.top(); pq.pop();
			pair<int, int> p = pp.second;
			res = max(res, -pp.first);
			if (gr[p.first] != gr[p.second])
			{
				ng--;
				unio(p.first, p.second);
			}
		}
		cout << res << endl;
	}
	return 0;
}

