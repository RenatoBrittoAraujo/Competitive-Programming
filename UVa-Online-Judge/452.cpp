#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;

int w[27];
vi G[27];
int vis[27];

int max_dfs(int u,int m){
    vis[u]=1;
    m += w[u];
    if(G[u].size()==0){return m;}
    int mn=m;
    for(auto v: G[u]){
        mn = max(mn, max_dfs(v,m));
    }
    return mn;
}

int main(){
    string s;stringstream ss;
    int ca;
    cin>>ca;cin.ignore();
    getline(cin,s);
    while(ca--){
        bool pr=0;
        int n=0;
        vi roots;
        while(getline(cin,s),s.size()!=0){
            if(cin.eof()){pr=1;break;}
            n++;
            ss.clear();
            ss<<s;
            char a;int b;string c;
            ss>>a>>b>>c;
            int p = a-65;
            if(c.size()==0)roots.push_back(p);
            w[p]=b;
            for(int i=0;i<c.size();i++)G[int(c[i]-65)].push_back(p);
        }
        if(pr)break;
        memset(vis,0,sizeof vis);
        int md = 0;
        for(int i=0;i<roots.size();i++)md=max(md,max_dfs(roots[i],0));
        cout<<md<<endl;
        if(ca)cout<<endl;
        for(int i=0;i<=27;i++)G[i].clear();
    }
    return 0;
}
