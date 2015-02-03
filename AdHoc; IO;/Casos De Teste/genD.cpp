#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen1(int n)
{
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand());
	}
	printf("\n");
}

void gen2(int n)
{
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand()%20);
	}
	printf("\n");
}

void gen3(int n)
{
	if (n <= 2) return;
	printf("%d\n", n);
	int s = rand();
	printf("%d", s);
	for (int i = 0; i < n-2; ++i)
	{
		printf(" ");
		printf("%d", rand());
	}
	printf(" %d", s);
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);
	
	int t = 100;
	while (t--)
	{
		if (rand()&1) gen1(rand()%100+1);
		else gen2(rand()%100+1);
		gen3(rand()%100+1);
	}	
	gen1(100);
	gen2(100);
	gen3(100);
}

