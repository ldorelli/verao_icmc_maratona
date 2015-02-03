#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n)
{
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand()%1000000001);
	}
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 45;
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
