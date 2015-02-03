#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int age[151];

int main()
{
	ios::sync_with_stdio(0);
	int n;
	while (cin >> n)
	{
		memset(age, 0, sizeof(age));
		int ma = 0;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			age[a]++;
			ma = max(ma, a);
		}
		for (int i = 1; i <= 150; ++i)
		{
			for (int j = 0; j < age[i]; ++j)
			{
				cout << i;
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
