#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n, int m)
{
	printf("%d %d\n", n, m);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand());
	}
	printf("\n");
	for (int i = 0; i < m; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand());
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
		int n = rand()%50+1;
		int m = rand()%50+1;
		gen(n, m);
	}
	t = 5;
	while (t--)
	{
		int n = rand()%50000+1;
		int m = rand()%50000+1;
		gen(n, m);
	}
	gen(1, 1);
	gen(50000, 50000);
}

