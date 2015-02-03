#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen1(int n, int m)
{
	printf("%d %d\n", n, m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (j) printf(" ");
			printf("%d", rand()%2);
		}
		printf("\n");
	}
}

void gen2(int n, int m)
{
	printf("%d %d\n", n, m);
	int s = rand()%2;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (j) printf(" ");
			printf("%d", s);
			s = !s;
		}
		printf("\n");
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
		int n = rand()%100+1;
		int m = rand()%100+1;
		gen1(n, m);
		gen2(n, m);
	}
	t = 1;
	while (t--)
	{
		int n = rand()%1000+1;
		int m = rand()%1000+1;
		gen1(n, m);
		gen2(n, m);
	}
	gen1(1000, 1000);
	gen2(1000, 1000);
}
