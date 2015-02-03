#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (i) printf("%c", rand()%10+'0');
		else printf("%c", rand()%9+'1');
	}
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);
	
	int t = 100;
	while (t--)
	{
		gen(rand()%1000+1);
	}	
	gen(1000);
}

