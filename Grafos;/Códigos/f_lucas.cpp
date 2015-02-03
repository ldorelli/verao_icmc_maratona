#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, bool> > x[1000];
bool vis1[1000];
bool vis2[1000];
int n, m;

bool dfs2(int u)
{
	if (u == n-1)
		return true;
	vis2[u] = true;
	bool ret = false;
	for (int j = 0; j < x[u].size(); ++j)
	{
		pair<int, bool>& p = x[u][j];
		if (!vis2[p.first] && p.second)
			ret |= dfs2(p.first);
	}
	return ret;
}

void dfs1(int u)
{
	vis1[u] = true;
	for (int j = 0; j < x[u].size(); ++j)
	{
		pair<int, bool>& p = x[u][j];
		if (!vis1[p.first])
		{
			p.second = false;
			for (int i = 0; i < n; ++i)
				vis2[i] = false;
			bool ret = dfs2(0);
			if (ret)
				dfs1(p.first);
			p.second = true;
		}
	}
}

int main()
{
	cin.sync_with_stdio(false);
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				x[i].clear();
		for (int i = 0; i < m; ++i)
		{
			int u, v;
			cin >> u >> v; u--; v--;
			x[u].push_back(make_pair(v, true));
			x[v].push_back(make_pair(u, true));
		}
		for (int i = 0; i < n; ++i)
			vis1[i] = false;
		dfs1(0);
		if (vis1[n-1])
			cout << "S\n";
		else
			cout << "N\n";
	}
	return 0;
}
