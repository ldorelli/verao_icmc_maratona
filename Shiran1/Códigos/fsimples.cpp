#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int M = 10;

typedef long long LL;

vector<LL> bonitos;

void gerar(int digitos, LL numero, int quatros, int setes)
{
	if (numero != 0 && quatros == setes) bonitos.push_back(numero);
	if (digitos == 0) return;
	gerar(digitos-1, numero*10+4, quatros+1, setes);
	gerar(digitos-1, numero*10+7, quatros, setes+1);
}

int main()
{
	gerar(M, 0, 0, 0);
	sort(bonitos.begin(), bonitos.end());
	ios::sync_with_stdio(0);
	
	LL n;
	while (cin >> n)
	{
		cout << *lower_bound(bonitos.begin(), bonitos.end(), n) << '\n';
	}
}

