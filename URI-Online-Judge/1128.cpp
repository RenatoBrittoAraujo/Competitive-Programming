#include <bits/stdc++.h>

using namespace std;

#define MAX_V 1000

vector<int> G[MAX_V];
int visited[MAX_V];

void dfs(int u) {
    visited[u] = 1;

    for(auto v: G[u])
        if (!visited[v])
            dfs(v);
}

int main()
{
    int n,m;
    while(cin>>n>>m,bool(n+m)){

        int x,y,z;
        for(int i=0;i<m;i++){
            cin>>x>>y>>z;
            G[x-1].push_back(y-1);
            if(z==2)G[y-1].push_back(x-1);
        }
        bool cn=true;
        for(int i=0;i<n;i++){
            memset(visited,0,sizeof visited);
            dfs(i);
            for(int i=0;i<n;i++)if(visited[i]!=1){cn=false;break;}
            if(!cn)break;
        }
        if(cn)cout<<1<<endl;
        else cout<<0<<endl;
        for(int i=0;i<n;i++)G[i].clear();
    }
    return 0;
}
