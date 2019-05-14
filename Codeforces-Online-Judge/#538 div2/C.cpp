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

ll sieves;
bitset<100000010> bs;
vi primes;

void sieve(ll mv){
    sieves = mv+1;
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2;i<=sieves;i++)if(bs[i]){
        for(ll j=i*i;j<=sieves;j+=i)bs[j]=0;
        primes.push_back(i);
    }
}

ll n,b;
ll pf[10000000];
ll rep[10000000];
ll oc[10000000];
int main(){
	sieve(10000000);
	scanf("%lld%lld",&n,&b);
	ll bpf = 1;
	ll indx=0;
	for(ll i=b/2;i>=2;i--)if(b%i==0&&bs[i]){pf[indx++]=i;}
	if(indx==0)pf[0]=b,indx++;
	ll nt = b;
	ll pfn = indx;
	indx=0;
	while(nt>1){
		if(nt%pf[indx]==0)nt/=pf[indx],rep[indx]++;
		else indx++;
	}
	for(ll i=0;i<pfn;i++){
		ll pr = pf[i];
		for(ll j=pr;j<=n;j+=pr){
			ll v = j;
			while(v%pr==0)v/=pr,oc[i]++;
		}
	}
	ll sum;
	for(ll i=0;i<pfn;i++){oc[i]/=rep[i];if(i==0)sum=oc[i];sum=min(sum,oc[i])};
	printf("%lld\n",sum);
	return 0;
}
