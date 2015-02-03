#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100;

int vet[N], pil[N], n;

int main()
{
	ios::sync_with_stdio(0);
	
	while (cin >> n)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> vet[i];
			pil[i] = 0;
		}
		sort(vet, vet+n);
		int res = 1;
		for (int i = 0; i < n; ++i)
		{
			int x = vet[i], conseguiu = 0;
			for (int j = 0; j < res; ++j)
			{
				if (pil[j] <= x)
				{
					pil[j]++;
					conseguiu = 1;
					break;
				}
			}
			if (!conseguiu)
			{
				pil[res] = 1;
				++res;
			}
		}
		cout << res << endl;
	}
	return 0;
}
