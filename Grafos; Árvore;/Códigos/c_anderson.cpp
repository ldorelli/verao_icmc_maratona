#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

#define INF 0x3f3f3f

using namespace std;

vector < pair < int, int> > adj[10004];

int main() {
	ios::sync_with_stdio(0);
	int n, m, a, b, c;

	while(cin >> n >> m) {

		while(m--) {
			cin >> a >> b >> c;
			adj[a].push_back(make_pair(b, c));
			adj[b].push_back(make_pair(a, c));
		}

		int result = 0;
		for(int i = 1; i< n; i++) {
			
			int menor = INF;

			for(int j = 0; j < adj[i].size(); j++) {

				if(adj[i][j].first == i+1 && adj[i][j].second < menor)
					menor = adj[i][j].second;
			}

			if(menor == INF) {
				result = -1;
				break;
			}

			result += menor;
		}

		cout << result << "\n";

		for(int i = 0; i <= n; i++)
			adj[i].clear();
	}

	return 0;
}
