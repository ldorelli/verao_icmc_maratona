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

	int t = 50;
	while (t--)
	{
		printf("%d\n", rand()%1000000000+1);
	}
	printf("1\n");
	printf("1000000000\n");
}
