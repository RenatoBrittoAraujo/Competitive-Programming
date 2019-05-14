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

ll number_pf(ll n){
    ll pfi=0,pf=primes[pfi],ans=0;
    while(pf*pf<=n){
        while(n%pf==0){n/=pf;ans++;}
        pf = primes[++pfi];
    }
    if(n!=1)return ans++;
    return ans;
}

ll n_different_pf(int n){
    vi r = prime_factors(n);
    set<ll> sz;
    for(int i=0;i<r.size();i++)sz.insert(r[i]);
    return sz.size();
}

ll sum_pf(int n){
    vi r = prime_factors(n);
    ll sum=0;
    for(int i=0;i<r.size();i++)sum+=r[i];
    return sum;
}

ll number_divisors(ll n){
    ll pfi=0,pf = primes[pfi],ans=1;
    while(pf*pf<=n){
        ll power=0;
        while(n%pf==0){n/=pf;power++;}
        ans*=(power+1);
        pf = primes[++pfi];
    }
    if(n!=1)ans*=2;
    return ans;
}

ll divisors_sum(ll n){
    ll pfi=0,pf = primes[pfi],ans=1;
    while(pf*pf<=n){
        ll power=0;
        while(n%pf==0){n/=pf;power++;}
        ans*=((ll)pow((double)n,2.0)-1)/(n-1);
        pf = primes[++pfi];
    }
    if(n!=1)ans*=((ll)pow((double)n,2.0)-1)/(n-1);
    return ans;
}

ll euler_phi(ll n){
    ll pfi=0,pf=primes[pfi],ans=n;
    while(pf*pf<=n){
        if(n%pf==0)ans-=ans/pf;
        while(n%pf==0)n/=pf;
        pf=primes[++pfi];
    }
    if(n!=1)ans-=ans/n;
    return ans;
}

/*TODO: Linear Diophantine Equations

ll xeu,yeu,deu;

void extended_euclid(ll a,ll b){
    if(b==0){xeu=1;yeu=0;deu=a;return;}
    extended_euclid(b,a%b);
    ll x1 = yeu;
    ll y1 = xeu-(a/b)*yeu;
    xeu=x1;yeu=y1;
}*/

int main(){
    cout<<"Welcome to number theory functions!\nCalculating primes...\n";
    sieve(10000000);
    int op,a,b;
    while(1){
        cout<<"\n1 - GDC | 2 - LMC | 3 - Prime Factors | 4 - Different PF | 5 - Sum PF\n";
        cout<<"6 - Number of Divisors | 7 - Divisors Sum | 8 - Euler Phi | 0 - EXIT\n";
        cin>>op;
        if(!op)break;
        switch(op){
        case 1:
            cin>>a>>b;
            cout<<gdc(a,b)<<endl;
            break;
        case 2:
            cin>>a>>b;
            cout<<lmc(a,b)<<endl;
            break;
        case 3:
            cin>>a;
            {vi out = prime_factors((ll)a);
            for(int i=0;i<out.size();i++)cout<<out[i]<<" ";
            cout<<endl;}
            break;
        case 4:
            cin>>a;
            cout<<n_different_pf(a)<<endl;
            break;
        case 5:
            cin>>a;
            cout<<sum_pf(a)<<endl;
            break;
        case 6:
            cin>>a;
            cout<<number_divisors(a)<<endl;
            break;
        case 7:
            cin>>a;
            cout<<divisors_sum(a)<<endl;
            break;
        case 8:
            cin>>a;
            cout<<euler_phi(a)<<endl;
            break;
        default:
            cout<<"UNDEFINED FUNCTION\n";
        }
    }
    return 0;
}
