
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
const int N = 1e6+10;

ll rema[N],remb[N];
bool ld[N],ild[N];

ll fexp(ll b,ll e,ll mod){
	ll ans = 1;
	b %= mod;
	while(e>0){
		if(e&1)ans = b*ans%mod;
		e = e>>1;
		b = b*b%mod;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	string s;
	cin>>s;	
	int n = len(s);
	ll a,b;
	cin>>a>>b;
	
	for(int i = n-1;i>=0 and s[i] == 0;i--)ld[i] = 1;	
	for(int i = 0;i<n and s[i] == 0;i++)ild[i] = 1;
	
	rema[0] = (s[0] - 48)%a;
	loop(i,1,n){
		ll c = s[i] - 48;
		rema[i] = (rema[i-1]*10 + c)%a;
	}	
	
	remb[n-1] = (s[n-1] - 48)%b;
	for(int i=n-2;i>=0;i--){
		ll c = s[i] - 48;
		remb[i] = (remb[i+1] + c*fexp(10,n-i-1,b))%b;
	}	

	string r1,r2;
	
	loop(i,0,n-1){
		//cout<<rema[i]<<' '<<remb[i+1]<<endl;
		if(remb[i + 1] == 0 and
		   rema[i] == 0 and
		   !ld[i+1] and !ild[i]
		   and s[i+1] != '0'){
			r1 = s.substr(0,i+1); 
   			r2 = s.substr(i+1);
			
			cout<<"YES\n";
			cout<<r1<<'\n'<<r2<<endl;
		
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
