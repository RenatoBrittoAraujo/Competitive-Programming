
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

ll fr[1000];

ll fexp(ll b,ll e){
	ll ans = 1;
	while(e > 0){
		if(e & 1)ans = b * ans % mod;
		b = b * b % mod;
		e = e >> 1;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	ll mr = 1;
	loop(i,0,n)
		fr[(int)s[i]]++;	

	loop(i,0,1000)mr = max(mr, fr[i]);
	
	//vi mx;
	
	ll nm = 0;
	
	loop(i,0,1000)if(fr[i] == mr)nm++;
	//cout<<nm<<endl;

	cout<<fexp(nm, (ll)n)<<endl;
	
	
	
	
	return 0;
}
