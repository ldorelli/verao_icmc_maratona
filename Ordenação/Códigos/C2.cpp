#include <iostream>
using namespace std;
int n,i,j,k,a[100],b[100];
int main () {
	while (cin>>n){
	for (i=0; i<n; i++) cin>>a[i]>>b[i];
	k=0;
    for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if (i!=j && a[i]==b[j]) {k++;break;}
	cout<<n-k<<endl;	}
}
