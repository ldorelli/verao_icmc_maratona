#include <iostream>

using namespace std;

#define LL long long

LL d;

LL pow(LL b, LL e)
{
	if (e == 0)
		return 1;
	else if (e == 1)
		return b;
	else if (e%2 == 1)
		return (b*pow(b,e-1))%d;
	else
		return pow((b*b)%d,e/2);
}

int main()
{
	LL a, b;
	while (cin >> a >> b >> d)
		cout << pow(a, b)%d << "\n";
	return 0;
}
