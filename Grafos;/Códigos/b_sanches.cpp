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
#define MAX 2010
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(0)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int vis[MAX];
int mat[MAX][MAX];
int n,m;
int x,y;
bool dfs(int curr){
	if(curr == n) return true;
	for(int i=0; i<=n; ++i){
		if(!vis[i] && mat[curr][i]){
			vis[i] = 1;
			if(dfs(i)) return true;
		}
	}
	return false;
}
int main(void){
	while(scanf("%d%d",&n,&m) != EOF){
		memset(mat, 0, sizeof mat);
		memset(vis, 0, sizeof vis);
		for(int i=0; i<m; ++i){
			scanf("%d%d",&x,&y);
			mat[x][y] = mat[y][x] = 1;
		}
		printf("%c\n", (dfs(1) == true) ? 'S' : 'N');
	}
	return 0;
}
