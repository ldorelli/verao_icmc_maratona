#include <cstdio>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {

	vector<string> v;
	vector<double> vnotas;
	string str;
	int n;
	double aux;
	
	while(v.size() < 10000) {
		n = rand()%5 + 5;
		str = "";		
		while(n--)
			str += (rand()%26 + 'a');
		if (find(v.begin(),v.end(),str)==v.end())
			v.push_back(str);
	}
	
	for (int i=0; i<1000; i++)
		vnotas.push_back(i/100.0);

	for (int i=0; i<40; i++) {
	
		int n = rand()%200 + 800;
		printf("%d\n", n);
		while(n--) {
			printf("%s %.2lf\n", v[n].c_str(), vnotas[n]);
		}
		
		n = rand()%1000 + 9000;
		printf("%d\n", n);
		while (n--)
			printf("%s\n", v[rand()%10000].c_str());
			
		for (int j=0; j<999; j++) {
			aux = vnotas[j]; vnotas[999]=vnotas[j]; vnotas[999]=aux;
		}
		for (int j=0; j<9999; j++) {
			str = v[j]; v[9999]=v[j]; v[9999]=str;
		}
		
	}

}