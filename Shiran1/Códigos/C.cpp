#include <iostream>

using namespace std;

#define LL long long
#define MOD 1000000007

LL fib[1000001];
int n;

int main()
{
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < 1000001; ++i)
		fib[i] = (fib[i-1]+fib[i-2])%MOD;
	cin.sync_with_stdio(false);
	while (cin >> n)
		cout << fib[n] << "\n";
	return 0;
}
