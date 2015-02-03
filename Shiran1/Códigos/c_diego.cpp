#include <cstdio>
#define MOD 1000000007
#define N 1000001

int f[N];

int main() {

	//precalc
	f[0] = 0;
	f[1] = 1;
	for (int i=2; i<N; i++)
		f[i] = (f[i-1] + f[i-2])%MOD;
	
	int n;
	while(scanf("%d ", &n)!= EOF)
		printf("%d\n",f[n]);
}
