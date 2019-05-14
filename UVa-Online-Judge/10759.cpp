#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

ll gdc(ll a,ll b){return b==0?a:gdc(b,a%b);}

int x;
ll memo[100][5000];

ll dp(int n,int scr){
    if(!n){
        if(scr>=x)return 1;
        else return 0;
    }
    if(memo[n][scr]!=-1)return memo[n][scr];
    ll o=0;
    for(ll i=1;i<7;i++)o+=dp(n-1,scr+i);
    return memo[n][scr]=o;
}

int main(){
    int n;
    while(cin>>n>>x,bool(n+x)){
        if(x<=n)cout<<1<<endl;
        else if(x>n*6)cout<<0<<endl;
        else{
            memset(memo,-1,sizeof memo);
            ll sspace = 1;
            for(int i=0;i<n;i++)sspace*=6;
            ll prob = dp(n,0);
            ll gdcnx = gdc(sspace,prob);
            cout<<prob/gdcnx<<'/'<<sspace/gdcnx<<endl;
        }
    }
    return 0;
}
