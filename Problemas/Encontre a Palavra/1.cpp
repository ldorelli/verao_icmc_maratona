#include <cstdio>
#include <cstring>

const int N = 101;

char maior[N], in[N];
int len, aux;

int main()
{
	len = -1;
	while (scanf("%s", in) == 1)
	{
		aux = strlen(in);
		if (aux > len) 
		{
			len = aux;
			strcpy(maior, in);
		}
	}
	printf("%s\n", maior);
}
