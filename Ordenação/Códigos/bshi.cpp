#include <iostream>
#include <queue>

using namespace std;

typedef long long int ll;

int main (void)
{
	int n, m;
	while (cin >> n >> m)
	{
		priority_queue<int> A, B;
		int x;
		for (int i = 0; i < n; ++i) 
		{
			cin >> x;
			A.push(x);
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> x;
			B.push(x);
		}

		while (B.size() && A.size())
		{
			int a = A.top(); A.pop();
			int b = B.top(); B.pop();
			if (a > b) {
				A.push(a-b);
			} else if (b > a) {
				B.push(b-a);
			}
		}
		cout << A.size() << " " << B.size() << endl;
	}
	return 0;
}