
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
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

string ar[N],re[N];
int n;
ll pr[N];

ll dpv[N][2];

string cd;

ll dp(int p,bool r){
	//cout<<p<<' '<<r<<endl;
	if(p==n)return 0;
	if(dpv[p][r]!=-1)return dpv[p][r];
	ll ans = LINF;
	
	if(r)cd = re[p-1];
	else if(!r)cd = ar[p-1];

	if((r?re[p-1]:ar[p-1]) <= ar[p])ans = min(ans, dp(p+1,0));
	if((r?re[p-1]:ar[p-1]) <= re[p])ans = min(ans, dp(p+1,1) + pr[p]);
	//cout<<p<<' '<<r<<" returning "<<ans<<endl;
	return dpv[p][r] = ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	loop(i,0,n)cin>>pr[i];
	loop(i,0,n)cin>>ar[i];
	loop(i,0,n){
		string s = ar[i];
		reverse(allv(s));
		re[i] = s;
	}
	memset(dpv,-1,sizeof dpv);
	ll ans = min(dp(1,0),dp(1,1)+pr[0]);
	if(ans>=1e17)ans = -1;
	cout<<ans<<endl;
	return 0;
}
