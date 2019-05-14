#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gdc(ll a,ll b){return b==0?a:gdc(b,a%b);}
ll t,a,b,c,d,e,f,ra,rb;
int main(){
	scanf("%lld",&t);
	while(t--){
		ra=0;rb=1;
		scanf("%lld/%lld%lld/%lld%lld/%lld",&a,&b,&c,&d,&e,&f);
		ra=a*d*f+b*c*f+e*b*d;
		rb=b*d*f;
		ll v = gdc(ra,rb);
		printf("%lld/%lld\n",ra/v,rb/v);
	}
}
