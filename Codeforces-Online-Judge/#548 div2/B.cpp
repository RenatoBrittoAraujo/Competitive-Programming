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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	
	vector<ll> a;
	ll x;
	loop(i,0,n)cin>>x,a.pb(x);
	
	ll last = INF;
	ll c = 0;
	for(ll i = n - 1; i >=0;i--){
		
		c += max(0LL,min(last - 1, a[i]));
		last = max(0LL,min(last - 1,a[i]));	
		
	}

	cout<<c<<endl;


	return 0;
}
