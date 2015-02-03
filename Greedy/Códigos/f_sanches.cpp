#include <cstdio>
#include <vector>
#include <utility>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <map>
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
#define MAX 10010
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(false)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int n;
int main(void){
	sync;
	while(cin >> n){
		int cont = 0;
		while(n && n%2 == 0){
			cont++;
			n/= 2;
		}
		if(cont % 2 == 0) cout << "Kiko Kiko RaRaRa" << "\n";
		else cout << "Isso Isso Isso" << "\n";
	}
	return 0;
}
