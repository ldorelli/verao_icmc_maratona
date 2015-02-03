#include <iostream>
#include <queue>
using namespace std;

int offset[8][2] = {
{-1,-2},{-2,-1},
{1,-2},{-2,1},
{-1,2},{2,-1},
{1,2},{2,1} 
};

bool v[9][9];

struct state{
	int x, y, level;
};

bool out(int o, state s){
	if(s.x + offset[o][0] < 1 || s.x + offset[o][0] > 8)
		return true;
	if(s.y + offset[o][1] < 1 || s.y + offset[o][1] > 8)
		return true;
	return false;
}	

int main(){
	int xa, xb, ya, yb;
	while(cin >> xa >> ya >> xb >> yb){
		for(int i = 0; i < 9; i++)
			for(int j = 0; j < 9; j++)
				v[i][j] = false;
		v[xa][ya] = 1;
		queue<state> q;
		state s; s.x = xa; s.y = ya; s.level = 0;
		q.push(s);
		while(!q.empty()){
			if(q.front().x == xb && q.front().y == yb){
				cout << q.front().level << endl;
				break;
			}
			v[q.front().x][q.front().y] = true;
			for(int o = 0; o < 8; o++){
				if(out(o,q.front())) continue;
				if(v[q.front().x + offset[o][0]][q.front().y + offset[o][1]]) continue;
				state st; 
				st.x = q.front().x + offset[o][0];
				st.y = q.front().y + offset[o][1];
				st.level = q.front().level + 1;
				q.push(st);
			}
			q.pop();
		}
	}
	return 0;
}