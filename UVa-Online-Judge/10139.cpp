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

void prarr(vi x){
    for(int i=0;i<x.size();i++)cout<<x[i]<<" ";
    cout<<endl;
}

int main(){
    int n,m;
    sieve(10000);
    while(cin>>n>>m,!cin.eof()){
        vi dv = prime_factors(m);
        vi di;
        for(int i=1;i<=n;i++){
            vi ans = prime_factors(i);
            for(int j=0;j<ans.size();j++){
                di.push_back(ans[j]);
            }
        }
        //prarr(dv);
        //prarr(di);

        bool pos=1;
        while(dv.size()>0){
            bool fd=0;
            for(int j=0;j<di.size();j++){
                if(dv[0]==di[j]){
                    dv.erase(dv.begin());
                    di.erase(di.begin()+j);
                    fd=1;
                    break;
                }
            }
            if(!fd)break;
        }
        if(dv.size()>0)pos=0;
        if(pos)cout<<m<<" divides "<<n<<"!\n";
        else cout<<m<<" does not divide "<<n<<"!\n";
    }
    return 0;
}
