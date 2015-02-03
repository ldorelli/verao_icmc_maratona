#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n)
{
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d %d\n", rand()%1000+1, rand()%1000+1);
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
		gen(n);
	}
	gen(100);
}

