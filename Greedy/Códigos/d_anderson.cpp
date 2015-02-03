#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

typedef struct EDGE {

	int a, b, c;	// nós a e b, e o peso da aresta que os conecta

}edge;

edge e[100005];
int v[1003];		// vetor do grupos (componentes)

bool cmp(edge x, edge y) {	// ordenacao das arestas
	return x.c < y.c;
}


int main() {
	int n, m;
	
	while(cin >> n >> m) {
				// atualizacao dos grupos (componentes)	
		for(int i = 0; i <= n; i++)
			v[i] = i;

		for(int i = 0; i < m; i++)
			cin >> e[i].a >> e[i].b >> e[i].c;

		sort(e, e + m, cmp);

		int result = 0;
		for(int i = 0; i < m; i++) {

				// se nao estiver no mesmo componente
				// entao junta os nós no mesmo grupo 
				// e conta esta aresta como resposta
			if(v[e[i].a] != v[e[i].b]) { 	

				int g1 = v[e[i].a];
				int g2 = v[e[i].b];

				for(int j = 0; j <= n; j++) {
					if(v[j] == g2)
						v[j] = g1;
				}

				result = max(e[i].c, result);
			}
		}

		cout << result << "\n";
	}

	return 0;
}
