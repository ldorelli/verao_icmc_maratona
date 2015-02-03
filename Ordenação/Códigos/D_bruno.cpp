#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

const int N = 100000;

int n, m;
int dra[N], cav[N];

int main()
{
	ios::sync_with_stdio(0);
	
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; ++i)
			cin >> dra[i];
		for (int j = 0; j < m; ++j)
			cin >> cav[j];
		sort(dra, dra+n);
		sort(cav, cav+m);
		
		bool good = 1;
		int j = m-1;
		for (int i = n-1; i >= 0 && good; --i)
		{
			while (j >= 0 && cav[j] <= dra[i])
				--j;
			if (j < 0) good = 0;
			--j;
		} 
		if (good) printf("S\n");
		else printf("N\n");
	}
}

