#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>
#include <set>
using namespace std;

const int N = 10000;

void gen(int n)
{
	printf("%d\n", n);
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 1000;
	while (t--)
	{
		int n = rand()%N+1;
		gen(n);
	}
}

