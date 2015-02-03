#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> adj[10004];

int result = 0;
void pre_ordem(int cur, int father, int high) {

	for(int i = 0; i < adj[cur].size(); i++) 
		if(adj[cur][i] != father) pre_ordem(adj[cur][i], cur, high + 1);

	result = max(result, high);
}

int main() {
	ios::sync_with_stdio(0);
	int n, a, b;

	while(cin >> n) {

		for(int i = 1; i < n; i++) {
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
				// encontra o noh de maior grau
		int gtr = 0;
		for(int i = 1; i <= n; i++)
			gtr = max((int) adj[i].size(), gtr);

				// faz percurso pra encontrar maior altura
		pre_ordem(1, 0, 1);

		cout << result << " " << gtr << "\n";
				
				// limpa memoria
		for(int i = 0; i <= n; i++)
			adj[i].clear();

		result = 0;
	}

	return 0;
}
