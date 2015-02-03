#include <cstdio>
#include <sys/time.h>
#include <cstdlib>

void gen(int n)
{
	while (n--)
	{
		int s = rand()%3;
		if (s == 0) printf("%c", rand()%26+'a');
		else if (s == 1) printf("%c", rand()%26+'A');
		else printf("%c", rand()%10+'0');
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
		gen(rand()%100+1);
	}	
	gen(100);
}

