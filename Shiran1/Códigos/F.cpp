#include <iostream>

using namespace std;

#define LL long long

LL n;
LL best;
int decimals;

LL pow(LL b, int e)
{
	LL ret = 1;
	for (int i = 0; i < e; i++)
		ret *= b;
	return ret;
}

int getDecs(LL v)
{
	int ret = 1;
	while (v / 10 > 0)
	{
		ret++;
		v /= 10;
	}
	return ret;
}

void solve(int i, int f, int s, LL res)
{
	if (i == decimals)
	{
		if (f == s && res <= best && res >= n)
			best = res;
	}
	else
	{
		solve(i+1, f+1, s, 4 * pow(10, i) + res);
		solve(i+1, f, s+1, 7 * pow(10, i) + res);
	}
}

int main()
{
	cin.sync_with_stdio(false);
	while (cin >> n)
	{
		best = 999999999999;
		decimals = getDecs(n);
		solve(0, 0, 0, 0);
		decimals++;
		solve(0, 0, 0, 0);
		decimals++;
		solve(0, 0, 0, 0);
		cout << best << endl;
	}
	return 0;
}
