//TEMPLATE DO RENATO SINCE 1928
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
const int N = 100010;
ll n,m,k,r;
ll arr[N];

ll dpv[N][N][N];

ll dp(ll p,ll k,ll pr){
	if(dpv[p][k][pr]!=0)return dpv[p][k][pr];
	if(k<1&&p!=n)return 10000000000;
	if(p==n&&k==0)return 0;
	if(p==n&&k>0)return 10000000000;
	ll dif = abs(arr[p]-arr[pr]);	
	ll ans = dp(p+1,k-1,p+1) + 1+dif;
	if(k<n-p)ans=min(ans,dp(p+1,k,pr));
	return dpv[p][k][pr]=ans;
}

int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	printf("%lld\n",dp(0,k,0));
	return 0;
}
