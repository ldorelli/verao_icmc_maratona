#include <iostream>

using namespace std;

typedef long long int ll;

ll sum (ll x)
{
	return (x*(x+1))/2;
}

int main (void)
{
	ll y;
	while (cin >> y)
	{
		ll lo = 1, hi = 10000000;
		while (hi != lo) {
			ll mid = (hi + lo)/2;
			ll v = sum(mid);
			if (v < y) lo = mid+1;
			else hi = mid;
		}
		cout << lo << endl;
	}
	return 0;
}