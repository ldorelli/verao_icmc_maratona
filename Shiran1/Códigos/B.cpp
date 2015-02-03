#include <iostream>

using namespace std;

int x[1000][1000];
int n, m;

int main()
{
	cin.sync_with_stdio(false);
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				cin >> x[i][j];
		int l = -1;
		bool ok = true;
		for (int i = 0; i < n; ++i)
		{
			if (x[i][0] == l)
				ok = false;
			l = x[i][0];
			for (int j = 1; j < m; ++j)
			{
				if (x[i][j] == x[i][j-1])
					ok = false;
			}
		}
		cout << (ok ? "S\n" : "N\n");
	}
	return 0;
}
