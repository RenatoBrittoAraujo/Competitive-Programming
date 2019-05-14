
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
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

int n,m,k;
int c[101];	
int p[101][101];

ll dpv[101][101][101];

ll dp(int po,int rp,int ac){
	//cout<<po<<' '<<rp<<' '<<ac<<endl;
	if(dpv[po][rp][ac]!=-1)return dpv[po][rp][ac];
		
	if(po==n and rp != 0)return LINF;
	else if(po==n and rp == 0)return 0;
	
	ll ans = LINF;
	
	if(c[po] == 0){

		loop(i,1,m+1){
			ans = min(ans, dp(po + 1, (po == 0) ? rp -1 : (rp - (ac != i)) ,i) + 1LL*p[po][i-1]);
		}
	
	}else ans = dp(po + 1, rp - (ac != c[po]), c[po]);
	
	return dpv[po][rp][ac] = ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m>>k;
	loop(i,0,n)cin>>c[i];
	loop(i,0,n)loop(j,0,m)cin>>p[i][j];

	memset(dpv,-1,sizeof dpv);
	
	ll ans = dp(0,k,-1);
	
	if(ans >= LINF) ans = -1;
	
	cout<<ans<<endl;
		
	return 0;
}
