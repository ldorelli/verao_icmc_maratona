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
		int n = rand()%1000000+1;
		printf("%d\n", n);
	}
}
