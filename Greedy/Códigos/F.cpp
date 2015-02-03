#include <iostream>
using namespace std;

int main() 
{
	int n;
	ios::sync_with_stdio(0);
	while (cin >> n) 
		cout << ((__builtin_ctz(n)&1) ? "Isso Isso Isso\n" : "Kiko Kiko RaRaRa\n");
}

