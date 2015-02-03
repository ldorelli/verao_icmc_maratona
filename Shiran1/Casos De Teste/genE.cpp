#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n, int c)
{
	printf("%d %d\n", n, c);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand()%10000000);
	}
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 10;
	while (t--)
	{
		int n = rand()%10+1;
		int c = rand()%1000000;
		gen(n, c);
	}
	
	t = 40;
	while (t--)
	{
		int n = rand()%20+1;
		int c = rand()%1000000000;
		gen(n, c);
	}
	
	gen(20, 1000000000);
}
