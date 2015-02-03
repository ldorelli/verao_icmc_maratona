#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	
	int n;
	
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 1; ; ++i)
		{
			sum += i;
			if (sum >= n)
			{
				cout << i << '\n';
				break;
			}
		}
	}
}

