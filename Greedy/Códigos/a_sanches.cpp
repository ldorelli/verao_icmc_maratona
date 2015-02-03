#include <cstdio>
#include <vector>
#include <utility>
#include <cstring>
#include <cstdlib>
#include <map>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <assert.h>
#include <bitset>

using namespace std;
#define pb push_back
#define mp make_pair
#define S second
#define F first
#define INF 0x3f3f3f3f
#define ll long long
#define mod (ll)10e9
#define B 33
#define MAX 100001
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(false)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int change[4] = {20, 10, 5, 1};
int n;
int main(void){
	while(scanf("%d",&n) != EOF){

		int k = 0;
		while(n > 0 && k < 4){

			while(k < 4 && n - change[k] >= 0){
				printf("%d",change[k]);
				n -= change[k];
				if(n > 0) printf("+");
			}

			k++;
		}

		printf("\n");
	}
	return 0;
}