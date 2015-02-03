#include <cstdio>
#include <vector>
#include <utility>
#include <cstring>
#include <cstdlib>
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
#define MAX 10010
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(false)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int n,m,x,y;
vii v;
bool cmp(ii a , ii b){
	if(a.F == b.F) return a.S > b.S;
	return a.F < b.F;
}
int main(void){
	while( cin >> n >> m ){
		v.clear();
		for(int i=0; i<n; ++i)
			cin >> x >> y, v.pb(mp(x,y));
		sort(v.begin(),v.end(), cmp);
		ii curr = v[0];
		ii sol = mp(-1,-1);
		int answ = 1;
		for(int i=1; i<v.size(); ++i){
			if(v[i].F <= curr.S && v[i].S >= curr.S && v[i].S > sol.S){
				sol = v[i];
			}
			else if(v[i].F > curr.S){
				curr = sol;
				sol = v[i];
				answ++;
			}
		}
		if(sol.F != -1 && sol.F <= curr.S && sol.S > curr.S) answ++;
		cout << answ << "\n";
	}
	return 0;
}