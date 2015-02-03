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

string in;
int main(void){
	while(cin >> in){

		for(int i=0; i<in.size(); ++i)
			if(in[i] != 0){
				in[i] = '0';
				break;
			}

			int x;
			sscanf(in.c_str(),"%d",&x);
			cout << x << "\n";
	}
	return 0;
}