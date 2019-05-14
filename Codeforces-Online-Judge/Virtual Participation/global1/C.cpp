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

int q;
ll r;

ll mem[27];

ll maxpf(ll n) {
    ll mp=-1; 
    while(n%2==0){ 
        mp=2; 
        n>>=1;
    }
    for (int i=3;i<=sqrt(n);i+=2) { 
        while(n%i==0) { 
            mp=i; 
            n=n/i; 
        } 
    }
    if (n>2)mp=n; 
    return mp; 
} 

int main(){
	for(int i=0;i<=25;i++)mem[i]=1<<i;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%lld",&r);
		ll ans=1;int indx=0;
		while(ans<=r)ans=mem[indx++];
		if((ans-1)==r){
			ll pf = 1;
			for(int i=3;i<=sqrt(r);i+=2)if(r%i==0){pf=i;break;}
			printf("%lld\n",(pf==1?1:r/pf));
		}else printf("%lld\n",ans-1);
	}	
	return 0;
}
