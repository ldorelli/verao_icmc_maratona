#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <map>
#include <cmath>
#include <queue>

#define N 1003
#define mp make_pair
#define S second
#define F first

using namespace std;

int main () {
	ios::sync_with_stdio(0);

	int n, m, x;
	priority_queue<int> blue, green;

	while(cin >> n >> m) {

		while(n--)
			cin >> x, blue.push(x);
		while(m--)
			cin >> x, green.push(x);

		while(!blue.empty() && !green.empty()) {

			int top1 = blue.top();
			int top2 = green.top(); 
			blue.pop(), green.pop();

			if(top1 > top2)
				blue.push(top1 - top2);
			else if(top2 > top1)
				green.push(top2 - top1);
		}

		cout << blue.size() << " " << green.size() << endl;

		while(!blue.empty()) blue.pop();
		while(!green.empty()) green.pop();
	}
	
	return 0;
}

