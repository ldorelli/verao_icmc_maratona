#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>
#include <set>
using namespace std;

const int N = 1000;

void gen()
{	
	int a = rand()%N+1;
	int b = rand()%N+1;
	if (a > b) swap(a, b);
	printf("%d %d %d\n", a, b, rand()%N+1);
}

int main()
{
	struct timeval tv;
	gettimeofday(&tv, 0);
	srand(tv.tv_usec);

	int t = 30;
	while (t--)
	{
		gen();
	}
}

