#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>
#include <set>
using namespace std;

const int N = 1000000000;

void gen(int n)
{
	printf("%d\n", n);
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 500;
	while (t--)
	{
		int n = rand()%1000000+1;
		gen(n);
	}
	
	t = 500;
	while (t--)
	{
		int n = rand()%N+1;
		gen(n);
	}
	
	gen(N);
}

