#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> g[10010];
bool d[10010];
int total[10010];

int end = -1, endLevel = 0;

void dfs(int par, int v, int level){
	if(endLevel < level){
		end = v;
		endLevel = level;
	}
	for(int i = 0; i < g[v].size(); i++){
		if(g[v][i] != par)
			dfs(v, g[v][i], level + 1);
	}
}

bool mark(int par, int v){
	if(v == end)
		return true;	
	for(int i = 0; i < g[v].size(); i++){
		if(g[v][i] != par){
			if(mark(v, g[v][i])){
				d[v] = true;
				return true;
			}
		}
	}
	return false;
}

void _count(int par, int v, int level){
	total[level]++;
	for(int i = 0; i < g[v].size(); i++){
		if(g[v][i] != par && !d[g[v][i]])
			_count(v, g[v][i], level + 1);
	}
}

int main(){
	int f;
	while(cin >> n >> f){
		for(int i = 1; i <= n; i++){
			d[i] = false;
			total[i] = 0;
			g[i].clear();
		}
		for(int i = 1; i < n; i++){
			int a, b; 
			cin >> a >> b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		endLevel = 0;
		dfs(1, 1, 0);
		int first = end;
		endLevel = 0;
		dfs(first, first, 0);
		
		d[first] = d[end] = true;
		
		int num = 0;

		if(f <= endLevel){
			cout << f + 1 << endl;
			continue;
		}
		else{
			num = endLevel + 1;
			f -= endLevel;	
		} 

		mark(first,first);

		for(int i = 1; i <= n; i++)
			if(d[i])
				_count(i,i,0);
		
		for(int i = 1; i <= n; i++){
			if(f <= total[i]*i*2){
				num += f/(i*2);
				break;
			}
			else{
				num += total[i];
				f -= total[i]*i*2;
			}
		}

		cout << num << endl;

	}
	return 0;
}