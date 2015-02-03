#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

#define F first
#define S second
#define mp make_pair
const int N = 10000;

pair<int, int> vet[N];
int n, d;

int main()
{
	ios::sync_with_stdio(0);
	
	while (cin >> n >> d)
	{
		for (int i = 0; i < n; ++i)
			cin >> vet[i].F >> vet[i].S;
		sort(vet, vet+n);
		
		int res = 0, j = 0, x = 0;
		
		while (x != d)
		{
			int y = 0;
			while (j < n && vet[j].F <= x)
			{
				y = max(y, vet[j].S);
				++j;
			}
			++res;
			x = y;
		}
		
		cout << res << '\n';
		
	}
}

