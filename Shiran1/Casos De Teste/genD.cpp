#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 1000;
	while (t--)
	{
		int a = rand()%1000000000+1;
		int b = rand()%1000000000+1;
		int d = rand()%10000+1;
		printf("%d %d %d\n", a, b, d);
	}
}
