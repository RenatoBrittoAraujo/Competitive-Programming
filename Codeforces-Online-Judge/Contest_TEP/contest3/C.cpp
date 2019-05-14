
#include <bits/stdc++.h>
using namespace std;
#define y second
#define x first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	ii p[3];
	
	loop(i,0,3){
		
		cin>>p[i].x>>p[i].y;
		
	}	

	set<ii> np;
	
	int p1, p2, p3;

	loop(i,0,3){

		if(i < 2){

			p1 = i;
			p2 = i + 1;
			p3 = (i + 2) % 3;

		}else{

			p1 = 0;
			p2 = 2;
			p3 = 1;

		}

		int vx = p[p2].x - p[p1].x;
		int vy = p[p2].y - p[p1].y;

		ii nnp = {p[p3].x + vx, p[p3].y + vy};

		np.insert(nnp); 

		vx = p[p1].x - p[p2].x;
		vy = p[p1].y - p[p2].y;

		nnp = {p[p3].x + vx, p[p3].y + vy};

		np.insert(nnp); 

	}

	cout<<np.size()<<endl;
	for(auto pp: np)
		cout<<pp.x<<' '<<pp.y<<endl;

	return 0;
}
