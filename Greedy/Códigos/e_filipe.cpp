#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct interval{
	int s, e;
};

bool compare(interval a, interval b){
	if(a.s == b.s) return a.e > b.e;
	return a.s < b.s;
}

int main(){
	int n, m;
	vector<interval> intervals;
	while(scanf("%d%d",&n,&m) != EOF){
		intervals.clear();
		for(int i = 0; i < n; i++){
			interval I;
			scanf("%d%d",&I.s,&I.e);
			intervals.push_back(I);
		}
		sort(intervals.begin(),intervals.end(),compare);
		
		int total = 1, last = 0, hold = -1;
		
		for(int i = 1; i < intervals.size(); i++){
			//cout << "last " << last << " " << i << endl;
			if(hold >= 0 && intervals[hold].e >= intervals[i].e) continue;
			if(intervals[last].e >= intervals[i].e) continue;
			//cout << "hold " << hold << " " << last << endl;
			if(intervals[i].s <= intervals[last].e){
				//cout << "damn!\n";
				if(hold >= 0 && intervals[hold].e < intervals[i].e){
					hold = i;
					continue;
				}
				total++;
				last = i;
			}
			else if(hold < 0){
					total++;
					last = i;
			}
			else if(intervals[hold].e > intervals[i].e){
				last = hold;
				total++;
				hold = -1;
				//cout << intervals[last].s << " " << intervals[last].e << endl;
			}
		}
		printf("%d\n",total);
	}
	return 0;
}