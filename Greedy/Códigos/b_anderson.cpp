#include <iostream>
#include <algorithm>

using namespace std;

int v[10004];

int main() {
	int n, result;
	
	while(cin >> n) {
		result = 0;

		for(int i = 0; i < n; i++)
			cin >> v[i];

		sort(v, v + n);

		for(int i = n -1; i >= 0; i -= 3) {
			result += v[i];
			if(i - 1 >= 0)
				result += v[i - 1];
		}

		cout << result << "\n";
	}

	return 0;
}
