#include <bits/stdc++.h>

using namespace std;

using ll = long long int;
using vi = vector<int>;
ll sieves;
bitset<10000010> bs;
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

int gdc(int n,int m){return m==0?n:gdc(m,n%m);}

int lmc(int n,int m){return n*(m/gdc(m,n));}

vi prime_factors(ll n){
    vi factors;
    ll pfi=0,pf = primes[pfi];
    while(pf*pf<=n){
        while(n%pf==0){n/=pf;factors.push_back(pf);}
        pf=primes[++pfi];
    }
    if(n!=1)factors.push_back(n);
    return factors;
}
ll q;

int main(){
	sieve(10000000);
	cin>>q;
	if(q==1){cout<<1<<endl<<0<<endl;return 0;}
	vi a = prime_factors(q);
	if(a.size()%2==0)cout<<2<<endl;
	else cout<<1<<endl<<(a.size()>0?q/a[0]:0)<<endl;
	return 0;
}
