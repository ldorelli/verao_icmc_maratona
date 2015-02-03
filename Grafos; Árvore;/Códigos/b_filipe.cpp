#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> g[10010];

int end = -1, endLevel = 0, m;

void dfs(int par, int v, int level){
	if(endLevel < level){
		end = v;
		endLevel = level;
	}
	if(g[v].size() > m)
		m = g[v].size();
	for(int i = 0; i < g[v].size(); i++){
		if(g[v][i] != par)
			dfs(v, g[v][i], level + 1);
	}
}

int main(){
	while(cin >> n){
		for(int i = 1; i <= n; i++)
			g[i].clear();
		for(int i = 1; i < n; i++){
			int a, b; 
			cin >> a >> b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		endLevel = 0;
		m = 0;
		dfs(1, 1, 1);
		cout << endLevel << " " << m << endl;
	}
	return 0;
}