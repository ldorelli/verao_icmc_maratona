#include <iostream>

using namespace std;

#define abs(A) (((A)>0)?(A):(-A))

int roads[10010];

int main(){
	int n, m, a, b, c;
	while(cin >> n >> m){
		for(int i = 0; i <= n; i++)
			roads[i] = 200010;
		for(int i = 0; i < m; i++){
			cin >> a >> b >> c;
			if(abs((a - b)) == 1)
				roads[min(a,b)] = min(roads[min(a,b)], c);
		}
		int sum = 0;
		for(int i = 1; i < n; i++){
			sum += roads[i];
			if(roads[i] == 200010){
				sum = -1;
				break;
			}
		}
			
		cout << sum << endl;
	}
	return 0;
}