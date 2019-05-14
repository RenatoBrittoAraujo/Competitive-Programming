#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
#define MAX_V 10010
vi G[MAX_V];
int w[MAX_V],s[MAX_V],vis[MAX_V];
bool pos=1;

void dfsfix(int u,int so){
    if(!pos)return;
    vis[u]=1;
    if(s[u]!=-1&&s[u]<so){pos=0;return;}
    if(w[u]==-1)w[u]=s[u]-so;
    for(auto v: G[u])
        dfsfix(v,so+w[u]);
}

int upd(int u){
    int nw = 1000000;
    if(G[u].size()<2
       )return 0;
    for(int i=0;i<G[u].size();i++)nw=min(nw,w[i]);
    for(int i=0;i<G[u].size();i++)w[i]-=nw;
    return nw;
}

int main(){
    memset(w,-1,sizeof w);
    int n,x;
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>x;
        G[x].push_back(i);
    }
    for(int i=1;i<=n;i++){cin>>s[i];if(s[i]==-1)w[i]=0;}
    w[1]=s[1];
    dfsfix(1,0);
    for(int i=1;i<=n;i++)if(s[i]==-1)w[i]=upd(i);
    if(pos){
        int mav=0;
        for(int i=1;i<=n;i++)mav+=w[i];
        cout<<mav<<endl;
    }else cout<<-1<<endl;
    return 0;
}
