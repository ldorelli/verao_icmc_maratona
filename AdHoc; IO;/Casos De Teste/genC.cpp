#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen()
{
	printf("%d\n", rand());
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);
	
	int t = 100;
	while (t--)
	{
		gen();
	}	
}

