#include <iostream> 

using namespace std;

bool primo(int n) {

	if(n == 1) return false;
	for(int i = 2; i < n; i++)
		if(n%i == 0) return false;

	return true;
}

int main() {
	ios::sync_with_stdio(0);
	int y;

	while(cin >> y) {
		while(!primo(y))
			y++;

		cout << y << "\n";
	}
	
	return 0;
}
