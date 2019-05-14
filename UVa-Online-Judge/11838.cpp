#include <bits/stdc++.h>

using namespace std;

vector<int> G[2010],num,low,vis,s;
int numscc,nc;

void sccp_detect(int u){
    low[u] = num[u] = nc++;
    vis[u]=1;
    s.push_back(u);
    for(int i=0;i<G[u].size();i++){
        int v = G[u][i];
        if(num[v]==-1)sccp_detect(v);
        if(vis[v])low[u]=min(low[u],low[v]);
    }
    if(low[u]==num[u]){
        numscc++;
        int v;
        do{v=s.back();s.pop_back();vis[v]=0;}while(u!=v);
    }
}

int main(){
    int n,m,v,w,p;
    while(cin>>n>>m,bool(n+m)){
        bool sccp=0;
        num.assign(n,-1);
        low.assign(n,0);
        vis.assign(n,0);
        numscc=nc=0;
        for(int i=0;i<m;i++){
            cin>>v>>w>>p;
            G[v-1].push_back(w-1);
            if(p==2)G[w-1].push_back(v-1);
        }

        for(int i=0;i<n;i++)if(num[i]==-1)sccp_detect(i);

        if(numscc==1)sccp=1;
        cout<<sccp<<endl;

        for(int i=0;i<n;i++)G[i].clear();
    }
    return 0;
}
