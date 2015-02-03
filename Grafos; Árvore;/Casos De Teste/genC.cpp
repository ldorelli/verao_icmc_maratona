#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int M = 100000;

int are[M][3], use[M];

void gen(int n, int m, bool z)
{
	int mm = 0;
	if (z)
	{
		// conecta todos os fera primeiro
		for (int i = 1; i < n; ++i)
			are[i][0] = i, are[i][1] = i+1, are[i][2] = rand()%1000+1;
		mm = n-1;
	}
	
	int c = m-mm;
	
	// gera resto de arestas aleatorias
	while (c > 0)
	{
		--c;
		are[mm][0] = rand()%n+1;
		are[mm][1] = rand()%n+1;
		are[mm][2] = rand()%1000+1;
		++mm;
	}
	
	// embaralha
	for (int i = 0; i < mm; ++i)
		use[i] = i;
	
	random_shuffle(use, use+mm);
	
	printf("%d %d\n", n, mm);
	
	for (int i = 0; i < mm; ++i)
	{
		int j = use[i];
		printf("%d %d %d\n", are[j][0], are[j][1], are[j][2]);
	}
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 20;
	while (t--)
	{
		int n = rand()%100+2;
		int m = rand()%1000+1;
		gen(n, m, 0);
		gen(n, m, 1);
	}
	t = 5;
	while (t--)
	{
		int n = rand()%9999+2;
		int m = rand()%100000+1;
		gen(n, m, 0);
		gen(n, m, 1);
	}
	gen(10000, 100000, 0);
	gen(10000, 100000, 1);
}
