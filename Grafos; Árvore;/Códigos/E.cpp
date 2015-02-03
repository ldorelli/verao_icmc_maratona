#include <iostream>
#include <queue>
#include <map>
#include <cstring>
using namespace std;

#define F first
#define S second
#define mp make_pair
const int N = 9;

int dir[][2] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
int vis[N][N], a, b, c, d;

bool valid(pair<int, int> p)
{
	return p.F >= 1 && p.F <= 8 && p.S >= 1 && p.S <= 8;
}

int solve(int a, int b, int c, int d)
{
	queue<pair<int, int> > que;
	vis[a][b] = 1;
	que.push(mp(a, b));
	
	while (!que.empty())
	{
		pair<int, int> p = que.front();
		que.pop();
		int dis = vis[p.F][p.S];
		
		for (int i = 0; i < 8; ++i)
		{
			pair<int, int> q = p;
			q.F += dir[i][0];
			q.S += dir[i][1];
			if (!valid(q)) continue;
			if (vis[q.F][q.S]) continue;
			vis[q.F][q.S] = dis+1;
			que.push(q);
		}
	}
	
	return vis[c][d]-1;
}

int main()
{
	ios::sync_with_stdio(0);
	
	while (cin >> a >> b >> c >> d)
	{
		memset(vis, 0, sizeof vis);
		cout << solve(a, b, c, d) << '\n';
	}
}

