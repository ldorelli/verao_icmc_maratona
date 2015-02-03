#include <iostream>

using namespace std;

int main() {
	int n, sub;
	
	while(cin >> n) {

		while(n > 0) {

			if(n >= 20)
				sub = 20;
			else if(n >= 10)
				sub = 10;
			else if(n >= 5)
				sub = 5;
			else 
				sub = 1;

			cout << sub << (n - sub > 0 ? "+" : "\n");
			n -= sub;
		}	

	}

	return 0;
}
