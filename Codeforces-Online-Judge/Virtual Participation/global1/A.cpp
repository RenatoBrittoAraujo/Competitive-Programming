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
#define mod 100000000000007
ll b,k,x;
ll im;

ll fexp(ll b,ll e){ 
   	ll ans=1;
    b=b%mod;
    while (e>0){ 
        if (e&1)ans=ans*b; 
        e=e>>1; 
        b=b*b;   
    } 
    return ans; 
}

int main(){
	im=0;
	scanf("%lld%lld",&b,&k);
	
	for(int i=0;i<k;i++){
		scanf("%lld",&x);
		if(fexp(b,k-i-1)&1 and x&1)im++;
	}
	//printf("%lld\n",im);	
	if(im&1)printf("odd\n");
	else printf("even\n");
	return 0;
}
