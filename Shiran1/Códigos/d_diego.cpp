#include <cstdio>

int expo(int a, int b, int d) {

	if (b == 1)
		return a%d;

	if (b%2)
		return (a%d*(expo(a, b-1, d))%d)%d;
	else
	{
		int aux = expo(a,b/2,d) % d;
		return (aux*aux)%d;
	}
		
}

int main() {

	int a,b,c,d;

	while(scanf("%d %d %d ", &a, &b, &d)!=EOF) {
		c = expo(a,b,d)%d;
		printf("%d\n", c);
	}

}
