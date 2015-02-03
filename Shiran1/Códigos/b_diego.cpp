#include <cstdio>

int v[1001];

int main() {
	
	int cur;
	int n, m;
	bool flag;
	
	while(scanf("%d %d ", &n, &m) != EOF) {
	
		flag = true;
		
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++) {
				scanf("%d ", &cur);
				if (j>0 && v[j-1]==cur)
					flag = false;
				if (i>0 && v[j]==cur)
					flag = false;
				v[j] = cur;
			}
			
		flag?printf("S\n"):printf("N\n");
	
	}

}