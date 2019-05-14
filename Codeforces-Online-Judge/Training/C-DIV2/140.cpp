
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

ll fexp(ll b,ll e,ll m){
	ll ans = 1;
	b=b%m;
	while(e>0){
		if(e&1)ans=ans*b%m;
		e=e>>1;
		b=b*b%m;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n,m;
	cin>>n>>m;
	ll ans = fexp(3,n,m);	
	if(ans==0)ans=m-1;
	else ans--;
	cout<<ans<<endl;
	return 0;
}
