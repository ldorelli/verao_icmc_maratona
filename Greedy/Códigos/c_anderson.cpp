#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string n;
	
	while(cin >> n) {
		int pow = 1;
		int result = 0;

		for(int i = n.size() - 1; i > 0; i--) {
			result += pow * (n[i] - '0');
			pow *= 10;
		}

		cout << result << "\n";
	}

	return 0;
}
