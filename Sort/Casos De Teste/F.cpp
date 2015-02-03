#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 10000;

struct Candidate {
	int pos[4];

	bool operator > (const Candidate& b) const {
		int wins = 0;
		for (int i = 0; i < 4; ++i)
			if (pos[i] < b.pos[i]) wins++;
		return wins > 2;
	}
};

int main (void)
{
	int n, c;

	while (cin >> n) 
	{
		vector <Candidate> v (n);
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 4; ++j) cin >> v[i].pos[j];
		}	
		int win = 0;
		for (int i = 1; i < n; ++i)
		{
			if (v[i] > v[win]) win = i;
		}
		bool good = true;
		for (int i = 0; i < n; ++i)
		{
			if (i != win && v[i] > v[win]) good = false;
		}

		if (good) printf("S\n");
		else printf("N\n");
	}
	return 0;
}
