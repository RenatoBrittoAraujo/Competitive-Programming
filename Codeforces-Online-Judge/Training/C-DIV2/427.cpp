
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
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

int n,q,c;

ll brt[101][101][14];
int x,y,s;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>q>>c;
	loop(i,0,n){
		cin>>x>>y>>s;
		loop(j,0,c+2){
			brt[x][y][j] += (s+j)%(c+1);
		}
	}
	
	loop(t,0,c+2){
		loop(i,1,101){
			loop(j,1,101){
				ll sum = brt[i][j][t];
				sum+=brt[i-1][j][t];
				sum+=brt[i][j-1][t];
				sum-=brt[i-1][j-1][t];
				brt[i][j][t] = sum;
			}
		}
	}
	ll x1,y1,x2,y2,t;
	while(q--){
		cin>>t>>x1>>y1>>x2>>y2;
		t = t%(c+1);
		ll v = brt[x2][y2][t];
		v -= brt[x2][y1-1][t];
		v -= brt[x1-1][y2][t];
		v += brt[x1-1][y1-1][t];
		cout<<v<<endl;
	}
	return 0;
}
