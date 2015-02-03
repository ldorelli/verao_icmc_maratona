#include<cstdio>
#include<vector>
#define N 500001
using namespace std;
vector<int> gr[N];
int dis[N];

int mdis, far;
void dfs(int v,int p, int d)
{
	if(d > mdis)
		mdis = d, far = v;

	for(int i=0;i<gr[v].size();++i)
	{
		int u = gr[v][i];
		if(u!=p)
			dfs(u,v,d+1);
	}
}

int main()
{
	int n,m; 

	while(scanf("%d%d",&n,&m) == 2)
	{
		for (int i = 1; i <= n; ++i) gr[i].clear();
		for(int i=1;i<n;++i)
		{
			int a,b;scanf("%d%d",&a,&b);
			gr[a].push_back(b);
			gr[b].push_back(a);
		}
		mdis=0;
		dfs(1,-1,0);
		mdis=0;
		dfs(far,-1,0);

		int ans = 0;
		ans = min(m+1, mdis+1);
		m -= ans-1;
		
		while(ans<n && m>=2)
		{
			m-=2; ++ans;
		}
		printf("%d\n", ans);
	}
		
	return 0;
}