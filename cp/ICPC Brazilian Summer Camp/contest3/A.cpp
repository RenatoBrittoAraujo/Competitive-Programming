#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

ll b,m,p;

ll power(ll b,ll e,ll mod){
	ll ret = 1;
	b=b%mod;
	while(e>0){
	if(e&1)ret=(ret*b)%mod;
	e>>=1;
	b=(b*b)%mod;
	}
	return ret;
}

int main(){
	while(cin>>b>>p>>m,!cin.eof()){
		cout<<power(b,p,m)<<endl;
	}
	return 0;
}

