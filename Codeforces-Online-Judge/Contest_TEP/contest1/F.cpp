
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

map<ll,ll> x,y;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	
	using pll = pair<ll,ll>;

	ll ans = 0;

	ll a,b;

	map<pll,ll> pts;

	loop(i,0,n){
		cin>>a>>b;

		//cout<<x[a]<<' '<<y[b]<<endl;
		
		ll s = pts[pll(a,b)];


		//cout<<s<<endl;

		//if(s!=0){i

		//	ans += x[a] + y[b] - max(0, s - 1);

		//}else{

			ans += x[a] + y[b] - s;
	
			x[a]++;
			y[b]++;
		//}
		pts[pll(a,b)]++;
	}

	cout<<ans<<endl;

	return 0;
}
