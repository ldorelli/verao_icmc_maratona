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

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int n,x;
set<int> s;
int main(void){
	ios :: sync_with_stdio(0);
	while(cin >> n){
		for(int i=0; i<n; ++i){
			cin >> x;
			s.insert(x);
		}
		cout << s.size() << "\n";
		s.clear();
	}
	return 0;
}
