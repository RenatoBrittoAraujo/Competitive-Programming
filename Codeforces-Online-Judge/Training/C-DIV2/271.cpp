
#include <bits/stdc++.h>
using namespace std;
#define y second
#define x first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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

ii p[4];
ii b[4];

void t(ii & c, const ii & a){
	c.x -= a.x;
	c.y -= a.y;
	int r = c.x;
	c.x = - c.y;
	c.y = r;
	c.x += a.x;
	c.y += a.y;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	
	loop(i,0,n){
		loop(j,0,4)cin>>p[j].x>>p[j].y>>b[j].x>>b[j].y;

		int t = 0;

		loop(v1,0,4){
			loop(v2,0,4){
				loop(v3,0,4){
					loop(v4,0,4){
						
						

						t(&p[3],&b[3]);
					}
					t(&p[2],&b[2]);
				}
				t(&p[1],&b[1]);
			}
			t(&p[0],&b[0]);
		}


	}

	return 0;
}
