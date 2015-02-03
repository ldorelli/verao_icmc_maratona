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
#define MAX 10010
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(false)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int n,m,x,y,w;
int answ;
int pai[MAX];
typedef struct edges edges;
struct edges{
	int w;
	int x,y;

	bool operator < (edges a) const{
		return w > a.w;
	}

};

priority_queue < edges > pq;

int find( int x ){
	if( x == pai[x] ) return x;
	return pai[x] = find(pai[x]);
}

bool unio(int x, int y){
	x = find(x);
	y = find(y);
	if(x == y) return false;
	
	pai[x] = y;
	return true;
}
int kruskal(){
	answ = 0;
	while(!pq.empty()){
		int peso = pq.top().w;
		int x = pq.top().x;
		int y = pq.top().y;
		pq.pop();
		
		if(unio(x,y))
			answ = max(answ, peso);
	}
}
int main(void){
	sync;
	while(cin >> n >> m){
		
		for(int i=0; i<=n; ++i) pai[i] = i;

		while(!pq.empty()) pq.pop();
		
		edges tmp;
		for(int i=0 ;i<m; ++i){
			cin >> tmp.x >> tmp.y >> tmp.w;
			pq.push( tmp );
		}
		
		kruskal();
		
		cout << answ << "\n";
	}
	return 0;
}