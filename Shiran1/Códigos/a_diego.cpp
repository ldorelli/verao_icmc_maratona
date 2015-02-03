#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {

	string s;
	map<string,double> m;
	vector<double> v;
	int n;
	double nota;
	
	while(cin >> n) {
		
		v.clear();
		m.clear();
		
		while(n--) {
			cin >> s >> nota;
			v.push_back(nota);
			m[s]=nota;
		}
		
		sort(v.begin(), v.end());
		
		cin >> n;
		while(n--) {
			cin >> s;
			if (m.find(s) == m.end())
				printf("Carlota nao te ama!\n");
			else {
				printf("%d\n",(int)(v.size()-(lower_bound(v.begin(), v.end(), m[s])-v.begin())));
			}
		}
		
	}

}