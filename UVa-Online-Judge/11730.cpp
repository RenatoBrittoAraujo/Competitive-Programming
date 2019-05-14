#include <bits/stdc++.h>

using namespace std;

int n,m,ca=1,ans;

#define inf 1000000
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

int dist[1001];
vector<int> pf[1001];

int bfs_mdist(int s,int d){
    memset(dist,inf,sizeof dist);
    dist[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();q.pop();
        if(pf[u].size()==0&&bs[u]==0)pf[u]=prime_factors(u);
        int t = pf[u].size();
        for(int i=0;i<t;i++){
            int cpf = pf[u][i];
            if(cpf+u<=d){
                if(dist[cpf+u]>=inf)q.push(cpf+u);
                dist[cpf+u]=min(dist[cpf+u],dist[u]+1);
            }else break;
        }
    }
    return dist[d];
}


int main(){
    sieve(1001);
    while(scanf("%d%d",&n,&m),bool(n+m)){
        int ans = bfs_mdist(n,m);
        printf("Case %d: %d\n",ca++,ans>=inf?-1:ans);
    }
    return 0;
}
