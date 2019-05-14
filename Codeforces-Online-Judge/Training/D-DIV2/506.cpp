
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

map<ll, int> a[20];
vector<ll> b;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n, k;
	cin>>n>>k;

	loop(i,0,n){
		ll x;
		cin>>x;
		ll v = 10;
		loop(j, len(to_string(x)) + 1, 11){
			a[j][(x%k)*v%k]++;
			cout<<(x%k)*v%k<<endl;
			v *= 10;
		}
		b.pb(x);
	}

	cout<<"--------"<<endl;

	int ans = 0;

	for(auto v: b){

		ll rem1 = v % k;

		cout<<(k - rem1)%k<<endl;
		
		ans += a[len(to_string(v)) - 1][(k - rem1)%k];
		
		ll x = 1;
		loop(i, 1, len(to_string(v)));
			x *= 10;

		//ans -= (v%k)*x%k == 0;

	}

	cout<<ans<<endl;

	return 0;
}
