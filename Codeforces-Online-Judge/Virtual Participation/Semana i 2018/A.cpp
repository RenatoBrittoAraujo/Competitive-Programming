#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ii = pair<int,int>;
#define ff first
#define ss second
#define push_back pb
#define mod (ll)1000000007
ll t,n;

ll fexp(ll b,ll e){
	ll res=1;
	b%=mod;
	while(e>0){
		if(e&1)res=b*res%mod;
		e=e>>1;
		b=b*b%mod;
	}
	return res;
}

int main(){
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",fexp(2,n/3-1));
		
	}
	return 0;
}
