#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>
#include <set>
#include <cassert>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#define F first
#define S second
#define mp make_pair

const int N = 10000;
const int M = 1000000000;

int bom = 0;

void gen(int n, int m)
{
	vector<pair<int, int> > vet, aux;
	for (int i = 1; i < n-1; ++i)
	{
		int a = rand()%(m+1);
		int b = rand()%(m+1);
		if (a > b) swap(a, b);
		vet.push_back(mp(a, b));
	}
	
	if (n <= 2)
	{
		vet.push_back(mp(0, m));
		if (n == 2) vet.push_back(mp(0, m));
	}
	else
	{
		vet.push_back(mp(0, rand()%(m+1)));
		vet.push_back(mp(rand()%(m+1), m));
	}
	
	aux = vet;
	sort(aux.begin(), aux.end());
	if (aux[0].F != 0) return;
	
	int z = aux[0].S;
	
	for (int i = 1; i < n; ++i)
	{
		int r = aux[i].S;
		int l = aux[i].F;
		if (l > z) return;
		z = max(z, r);
	}
	
	if (z != m) return;
	
	++bom;
	printf("%d %d\n", n, m);
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", vet[i].F, vet[i].S);
}

void gen2(int n, int m)
{
	vector<pair<int, int> > vet, aux;
	int r = m/n+1;
	for (int i = 0; i < n; ++i)
	{
		vet.push_back(mp(max(0, r*i-(rand()%(3*r))), min(m, r*(i+1)+(rand()%(3*r)))));
	}
	aux = vet;
	sort(aux.begin(), aux.end());
	if (aux[0].F != 0) return;
	
	int z = aux[0].S;
	
	for (int i = 1; i < n; ++i)
	{
		int r = aux[i].S;
		int l = aux[i].F;
		if (l > z) return;
		z = max(z, r);
	}
	
	if (z != m) return;
	
	++bom;
	printf("%d %d\n", n, m);
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", vet[i].F, vet[i].S);
}

void genmal(int n)
{
	printf("%d %d\n", n, n);
	vector<pair<int, int> > vet;
	for (int i = 0; i < n; ++i)
		vet.push_back(mp(i, i+1));
	random_shuffle(vet.begin(), vet.end());
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", vet[i].F, vet[i].S);
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 30;
	while (t--)
	{
		int n = rand()%20+1;
		int m = rand()%1000+1;
		gen(n, m);
		gen2(n, m);
	}
	
	t = 30;
	while (t--)
	{
		int n = rand()%1000+1;
		int m = rand()%1000000+1;
		gen(n, m);
		gen2(n, m);
	}
	
	t = 10;
	while (t--)
	{
		int n = rand()%100+1;
		genmal(n);
	}
	
	t = 10;
	while (t--)
	{
		int n = rand()%N+1;
		int m = rand()%M+1;
		gen(n, m);
		int l = M;
		gen2(n, m);
	}
	
	gen2(N, M);
	gen(N, M);
	genmal(N);
	
	fprintf(stderr, "%d\n", bom);
}

