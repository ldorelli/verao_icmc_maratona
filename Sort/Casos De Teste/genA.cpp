#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n)
{
	while (n--)
	{
		if (rand()%10) printf("%c", rand()%26+'a');
		else printf(" ");
	}
	printf("\n");
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 50;
	while (t--)
	{
		int n = rand()%10000+1;
	}	
	gen(10000);
}
