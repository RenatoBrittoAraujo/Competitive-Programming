
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

ll fexp2(int e){
	ll res = 1;
	ll b = 2;
	while(e>0){	
		if(e&1)res = res * b % mod;
		e = e>>1;
		b = b*b%mod;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	// ans = decimal(s) * (2^(n-1))	don't know how to implement this modulo 1e9+7
	string s;	
	cin>>s;
	int n = len(s);
	ll ans = s[n-1] - 48;
	//cout<<ans<<endl;
	for(int i=n-2;i>=0;i--){
		if(s[i] == '0') ans =  ans * 2 % mod;
		else{
			ans = (ans * 2 % mod + fexp2((n-i-1)*2))%mod;
		}
	}
	cout<<ans<<endl;
	return 0;
}
