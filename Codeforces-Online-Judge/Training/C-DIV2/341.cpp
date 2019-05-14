
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

ll n,p,l,r;
double v[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>p;
	loop(i,0,n){
		cin>>l>>r;
		ll a = r/p - (l-1)/p;
		//cout<<a<<endl;
		a = r-l+1-a;
		v[i] = double(a)/double(r-l+1);
	}
	
	double ans = 0;
	
	loop(i,0,n){
		double prob = 1.0 - (v[i]*v[(i+1)%n]);
		//cout<<prob<<endl;
		ans += prob*2e3;
	}	
	cout<<fixed<<setprecision(8)<<ans<<endl;			
	return 0;
}
