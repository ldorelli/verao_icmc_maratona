#include <iostream>
#include <algorithm>

using namespace std;

int v[100];
int n, t;

int main()
{
	cin >> t;
	while (t-- > 0)
	{
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		sort(v, v+n);
		int res = n;
		for (int p = n; p > 0; --p)
		{
			bool ok = true;
			for (int i = 0, w = 0; i < n && ok; i += p, ++w)
			{
				if (v[i] < w)
					ok = false;
			}
			if (ok)
				res = p;
		}
		cout << res << endl;
	}
	return 0;
}
