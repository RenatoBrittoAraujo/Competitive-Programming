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
const int N = 1e4;

int n,m;
int cf[101];
int dpv[101][N+10];

int dp(ll p, ll k){
	//cout<<p<<' '<<k<<endl;
	if(p==n and k>0)return 10000000;
	if(k<=0)return 0;
	if(dpv[p][k]!=0)return dpv[p][k];
	int ans = 10000000;
	int csc = 0;
	int c = 0;
	while(p+csc<n and k-c>=0 and cf[p+csc]-csc > 0){
		c+=cf[p+csc]-csc;
		csc++;
		ans = min(ans, dp(p+csc,k-c));
	}
	return dpv[p][k] = ans+1;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m;
	loop(i,0,n)cin>>cf[i];
	sort(cf,cf+n,greater<int>());	
	//memset(dpv,-1,sizeof dpv);
	int ans = dp(0,m);
	if(ans>=100000)ans = -1;
	cout<<ans<<endl;
	return 0;
}
