//TEMPLATE DO RENATO SINCE 1929
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back
#define ins insert
#define eb emplace_back
using vi = vector<int>;
const int mod = 1e9+7;
const int maxn = 2e5+5;
ll l,r,n;

ll dp[maxn][3];

int main(){
	scanf("%lld%lld%lld",&n,&l,&r);
	ll a = (r-l+1)/3,b = (r-l+1)%3;
	ll c,d,e;
	if(l%3==0)c=a+(b>=1),d=a+(b>=2),e=a;
	else if(l%3==1)c=a,d=a+(b>=1),e=a+(b>=2);
	else c=a+(b>=2),d=a,e=a+(b>=1);
	dp[1][0]=c;
	dp[1][1]=d;
	dp[1][2]=e;
	for(int i=2;i<=n;i++){
		dp[i][0]=(dp[i-1][1]*e%mod+dp[i-1][2]*d%mod+dp[i-1][0]*c%mod);
		dp[i][1]=(dp[i-1][1]*c%mod+dp[i-1][2]*e%mod+dp[i-1][0]*d%mod);
		dp[i][2]=(dp[i-1][1]*d%mod+dp[i-1][2]*c%mod+dp[i-1][0]*e%mod);
	}
	printf("%lld\n",dp[n][0]);
	return 0;
}
