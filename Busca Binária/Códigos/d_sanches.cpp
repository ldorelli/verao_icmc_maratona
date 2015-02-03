#include <cstdio>
#include <vector>
#include <utility>
#include <cstring>
#include <cstdlib>
#include <map>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <assert.h>
#include <bitset>

using namespace std;
#define pb push_back
#define mp make_pair
#define S second
#define F first
#define INF 0x3f3f3f3f
#define ll long long
#define mod (ll)10e9
#define B 33
#define MAX 10010
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(false)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int vis[MAX];
int a,b,c,n,m;
vii adj[MAX];
bool dfs(int curr, int tempo){

	if(curr == n) return true;
	for(int i=0; i<adj[curr].size(); ++i){
		int u = adj[curr][i].S;
		int t = adj[curr][i].F;
		if(!vis[u] && t <= tempo){
			vis[u] = 1;
			if(dfs(u, tempo)) return true;
		}
	}
	return false;
}
int bs(int lo, int hi)
{
	while(hi >= lo)
	{
		int mid = (hi + lo) / 2;
		memset(vis, 0 ,sizeof vis);
		vis[1] = 1;
		if(dfs(1,mid)) hi = mid - 1;
		else lo = mid + 1;
	}
	return lo;
}

int main(void)
{
	sync;
	while(cin >> n >> m)
	{
		for(int i=0; i<=n; ++i) adj[i].clear();
		
		for(int i=0; i<m; ++i)
		{
			cin >> a >> b >> c;
			adj[a].pb( mp(c,b) );
			adj[b].pb( mp(c,a) );
		}
		
		cout << bs(0, 1000000000) << "\n";
	}
	return 0;
}