#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 205;
int n;
string str;
vector<ll> a;
ll dpv[N][N][N];

ll dp(int s,int e,int p){
    if (e-s<=0)return 0;
    if (e-s== 1)return a[p];
    ll &ans = dpv[s][e][p];
    if (ans != 0)return ans;
    ans = a[p] + dp(s+1,e,1);
    for (int i=s+1;i<e;i++)
        if (str[i]==str[s])
            ans=max(ans,dp(s+1,i,1)+dp(i,e,p+1));
    return ans;
}

int main() {
    cin>>n>>str;
    a.assign(n+1,0);
    for (int i=1;i<=n;i++)
        cin>>a[i];
    cout<<dp(0,n,1)<<endl;
}
