#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
#include <cmath>
#include <queue>

#define N 1000005
#define mp make_pair
#define S second
#define F first

using namespace std;

int main () {
	ios::sync_with_stdio(0);

	int n, x;
	int v[N];

	while(cin >> n) {

		for(int i = 0; i < n; i++) 
			cin >> v[i];
		sort(v, v + n);

		for(int i = 0; i < n; i++)
			cout << v[i] << " ";
		cout << endl;
	}
	
	return 0;
}

