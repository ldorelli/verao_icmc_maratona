#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <climits>
#include <set>
using namespace std;

const int N = 1000;

void gen()
{
	printf("%d\n", rand()%N+1);
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

