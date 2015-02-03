#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
#include <cmath>

#define N 1003
#define mp make_pair
#define S second
#define F first

using namespace std;

int main () {
	ios::sync_with_stdio(0);

	int y;

	while(cin >> y) {
		int x = ceil((sqrt(8.0 * (double)y + 1.0) - 1.0)/2.0);
		cout << x << endl;
	}
	
	return 0;
}

