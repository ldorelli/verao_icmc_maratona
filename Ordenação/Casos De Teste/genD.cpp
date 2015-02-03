#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>

void gen(int n, int m, int mod)
{
	printf("%d %d\n", n, m);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand()%mod);
	}
	printf("\n");
	for (int i = 0; i < m; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand()%mod);
	}
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 40;
	while (t--)
	{
		int m = rand()%50+1;
		int n = rand()%m+1;
		gen(n, m, 100);
	}
	t = 3;
	while (t--)
	{
		int m = rand()%100000+1;
		int n = rand()%m+1;
		
		gen(n, m, rand()%1000000000+1);
	}
	gen(1, 1, 2);
	gen(100000, 100000, 100000);
}

