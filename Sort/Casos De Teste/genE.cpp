#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int vet[3][10000];

void gen(int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < 3; ++j)
			vet[j][i] = i+1;
	for (int i = 0; i < 3; ++i)
		random_shuffle(vet[i], vet[i]+n);
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d %d %d\n", vet[0][i], vet[1][i], vet[2][i]);
	}
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 25;
	while (t--)
	{
		int n = rand()%10+1;
		gen(n);
	}
	t = 20;
	while (t--)
	{
		int n = rand()%100+1;
		gen(n);
	}
	t = 5;	
	while (t--)
	{
		int n = rand()%10000+1;
		gen(n);
	}
	gen(10000);
	gen(10000);
}
