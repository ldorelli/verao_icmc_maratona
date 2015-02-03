#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
#include <cmath>
#include <queue>

#define N 100005
#define mp make_pair
#define S second
#define F first

using namespace std;

bool cmp(int a, int b) { return a > b; }

int main () {
	ios::sync_with_stdio(0);

	int n, m, x;
	int dra[N], cav[N];

	while(cin >> n >> m) {

		for(int i = 0; i < n; i++)
			cin >> dra[i];
		for(int i = 0; i < m; i++)
			cin >> cav[i];

		sort(dra, dra + n, cmp);
		sort(cav, cav + m, cmp);
		
		int i;
		for(i = 0; i < n ; i++)
			if(cav[i] <= dra[i]) break;
		cout << (i == n ?  "S\n" : "N\n");
	}
	
	return 0;
}

