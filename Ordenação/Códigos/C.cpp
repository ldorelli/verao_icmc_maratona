#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int v[100][2];
bool o[100];

int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		memset(o, 0, sizeof o);
		memset(v, 0, sizeof v);
		for (int i = 0; i < n; ++i)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			v[i][0] = a;
			v[i][1] = b;
		}
	
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (i == j)
					continue;
				
				if (v[i][1] == v[j][0])
					o[j] = true;
			}
		}
	
		int res = 0;
		for (int i = 0; i < n; ++i)
		{
			if (!o[i])
				res++;
		}
	
		printf("%d\n", res);
	}
	
	return 0;
}
