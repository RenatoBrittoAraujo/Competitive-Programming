
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

int n;
ll s[5*N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll x,sum = 0;
	cin>>n;

	loop(i,1,n+1)cin>>x,s[i] = (sum += x);	

	double valt = double(s[n])/3.0;
	double val = s[n]/3;
	
	if(valt != val){cout<<0<<endl;return 0;}
	
	ll vpi = 0;	
	
	ll ans = 0;
	
	loop(i,1,n){
		if(i > 1 and s[i] == val*2)ans += vpi;
		if(i < n and s[i] == val)vpi++;
	}	
	
	cout<<ans<<endl;
	
	return 0;
}
