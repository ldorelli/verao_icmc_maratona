#include <cstdio>


int obj[21];

int max(int a, int b)
{
	return a > b ? a : b;
}

int peso(int n, int c) {

	if (n<0)
		return 0;
	
	if (obj[n] > c)
		return peso(n-1,c);
	else
		return max(obj[n]+peso(n-1, c-obj[n]),peso(n-1,c));

}

int main() {

	int c, n;

	while(scanf("%d %d ", &n, &c) != EOF) {
		for (int i=0;i<n;i++)
			scanf("%d ", &obj[i]);
		printf("%d\n", peso(n-1,c));
	}
	
}
