#include <cstdio>
#include <sys/time.h>
#include <cstdlib>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	for (int i = 1; i <= 8; ++i)
		for (int j = 8; j >= 1; --j)
			for (int k = 1; k <= 8; ++k)
				for (int l = 8; l >= 1; --l)
					printf("%d %d %d %d\n", i, j, k, l);
}
