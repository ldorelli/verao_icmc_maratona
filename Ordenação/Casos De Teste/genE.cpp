#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>

void gen(int n)
{
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		if (i) printf(" ");
		printf("%d", rand()%150+1);
	}
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 995;
	while (t--)
	{
		int n = rand()%50+1;
		gen(n);
	}
	t = 5;
	while (t--)
	{
		int n = rand()%1000000+1;
		gen(n);
	}
	gen(1000000);
}

