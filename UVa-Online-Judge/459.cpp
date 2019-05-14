#include <bits/stdc++.h>

using namespace std;

using vi = set<int>;

vi G[27];
bool visited[27];

void dfs(int u){
    visited[u]=1;
    for(auto v: G[u]){
        if(!visited[v])dfs(v);
    }
}

int main(){
    int n,ca;
    char x;
    string s;
    cin>>ca;
    while(ca--){
        cin>>x;n=x-65;
        memset(visited,0,sizeof visited);
        cin.ignore();
        while(getline(cin,s),s.size()>0){
            int a = s[0]-65;
            int b = s[1]-65;
            if(a!=b){
                G[a].insert(b);
                G[b].insert(a);
            }
        }
        int csc=0;
        for(int i=0;i<=n;i++){
            if(visited[i]==0){
                csc++;
                dfs(i);
            }
        }
        cout<<csc<<"\n";
        if(ca){
            cout<<endl;
            for(int i=0;i<=n;i++)G[i].clear();}
    }
    return 0;
}
