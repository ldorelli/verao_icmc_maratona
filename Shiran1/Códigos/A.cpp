#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

pair<double, string> grades[1000];
map<string, int> names;

int main()
{
	cin.sync_with_stdio(false);
	int n;
	while (cin >> n)
	{
		names.clear();
		for (int i = 0; i < n; ++i)
		{
			cin >> grades[i].second;
			cin >> grades[i].first;
		}
		sort(grades, grades+n);
		for (int i = 0; i < n; ++i)
			names[grades[i].second] = n-i;
		int m;
		cin >> m;
		for (int i = 0; i < m; ++i)
		{
			string name;
			cin >> name;
			if (names.find(name) == names.end())
				cout << "Carlota nao te ama!\n";
			else
				cout << names[name] << "\n";
		}
	}
	return 0;
}
