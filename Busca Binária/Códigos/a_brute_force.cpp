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
#define MAX 100100
#define eps 1e-7
#define ull unsigned long long
#define sync ios :: sync_with_stdio(false)

typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<ii> vii;

int y;
bool isPrime(int x){
	if(x == 1) return false;
	for(int i=2; i<x; ++i){
		if(x%i == 0) return false;
	}
	return true;
}
int solve(int x){
	for(int i=x; i<=1000000; ++i){
		if(isPrime(i)) return i;
	}
}
int main(void){
	sync;
	while(cin >> y){
		cout << solve(y) << "\n";
	}
	return 0;
}