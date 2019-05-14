
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

ll a[3*N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	ll n,k;
	cin>>n>>k;

	map<ll, ll> mp, lf;

	loop(i,0,n)cin>>a[i], mp[a[i]]++;
	
	ll ans = 0;
	
	for(ll i = 0; i < n; i++){
	
		ll k1 = 0, k2 = 0;
	
		ll v1 = a[i] / k;
		ll v2 = a[i] * k;
		
		if(a[i] % k == 0)k1 = lf[v1];

		mp[a[i]]--;
	
		k2 = mp[v2];
	
		ans += k1 * k2;
		
		lf[a[i]]++;
	
	}
		
	
	cout<<ans<<endl;
	

	return 0;
}
