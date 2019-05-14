
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

ll fact(ll n){
	if(n==1)return 1;
	else return n*fact(n-1);
}

ll binom(ll n,ll k){
	ll v1 = n-k;
	ll ans = 1;
	ll v2 = 1;
	for(int i=n;i>max(v1,k);i--){
		ans*=i;
		if(ans%v2==0 and v2<=min(v1,k))ans/=v2,v2++;
	}	
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	ll n,m,t;
	cin>>n>>m>>t;
	unsigned long long int ans = 0;
	for(int i=0;i<=t-5;i++){
		int am = 4+i;
		if(am>n or (t-am)>m)continue;
		ll fb = binom(n,am);
		ll sb = binom(m,t-am);
		ans+=fb*sb;
	}
	cout<<ans<<endl;
	return 0;
}
