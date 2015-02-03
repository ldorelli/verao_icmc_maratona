#include <iostream>
#include <algorithm>
#include <utility>

#define F first
#define S second 

using namespace std;

pair < int , int > v[10004];
int main() {
	int n, m;
	
	while(cin >> n >> m) {
		
		for(int i = 0; i < n; i++)
			cin >> v[i].F >> v[i].S;
		
		sort(v, v + n);

		int beg = 0;
		int count = 0;
		for(int i = 0; i < n && beg < m; i++) {
			int id = i;

			for(; i < n && v[i].F <= beg ; i++) {
				if(v[i].S > v[id].S)
					id = i;
			}i--;


			beg = v[id].S;
			count++;
		}
		cout << count << endl;
	}

	return 0;
}
