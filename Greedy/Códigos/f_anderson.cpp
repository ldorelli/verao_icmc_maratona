#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	
	while(cin >> n) {
		int i = 0;

		while(n > 0) {
			if(n%2)
				break;
			else
				n = n/2;
			i++;
		}

		if(i % 2)
			cout << "Isso Isso Isso\n";
		else
			cout << "Kiko Kiko RaRaRa\n";
	}

	return 0;
}
