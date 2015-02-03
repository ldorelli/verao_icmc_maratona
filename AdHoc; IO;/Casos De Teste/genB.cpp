#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n)
{
	while (n--)
	{
		if (rand()&1) printf("%c", rand()%26+'a');
		else printf("%c", rand()%26+'A');
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
		int n = rand()%100+1;
		gen(n);
	}	
	
	gen(100);
	gen(100);
}

