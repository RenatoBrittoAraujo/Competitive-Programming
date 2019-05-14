#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
ll fexp(ll b,ll e){ 
   	ll ans=1;
    b=b%mod;
    while (e>0){ 
        if (e&1)ans=ans*b%mod; 
        e=e>>1; 
        b=b*b%mod;   
    } 
    return ans; 
}

int main(){
	while(1){
		ll a,b;
		cin>>a>>b;
		cout<<fexp(a,b)<<endl;
	}
}
