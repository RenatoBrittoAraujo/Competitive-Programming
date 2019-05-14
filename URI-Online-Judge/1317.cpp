#include <bits/stdc++.h>

using namespace std;

#define MAX_V 21

vector<int> G[MAX_V];
int visited[MAX_V];

vector<pair<int,int>> bfs(int iv) {
    vector<pair<int,int>> pts;
    memset(visited, 0, sizeof visited);
    queue<int> to_visit;
    to_visit.push(iv);
    visited[iv] = 1;
    while(!to_visit.empty()) {
        auto u = to_visit.front();
        to_visit.pop();
        pts.push_back(make_pair(u,G[u].size()));
        for (auto v: G[u]) {
            if (!visited[v]) {
                visited[v] = 1;
                to_visit.push(v);
            }
        }
    }
    return pts;
}

int main(){
    int n;
    while(cin>>n,n){
        string atr[21];
        int r;
        for(int i=0;i<n;i++){
            while(cin>>r,r)G[i].push_back(r-1);
        }
        int s,t1,t2;string a1,a2,a3;
        while(cin>>s,s){
            cin>>t1>>t2>>a1>>a2>>a3;
            vector<pair<int,int>> tes = bfs(s-1);
            bool t[n]={0};
            for(auto i: tes){
                string satr;
                int v = i.second;
                if(v>=t2)satr = a3;
                else if(v>=t1)satr= a2;
                else satr = a1;
                satr+=' ';
                t[i.first]=1;
                atr[i.first]+=satr;
            }
            for(int i=0;i<n;i++){
                if(!t[i])atr[i]+=a1+' ';
            }
        }
        string name;
        for(int i=0;i<n;i++){
            cin>>name;
            cout<<name<<": "<<atr[i]<<endl;
        }
        for(int i=0;i<n;i++)G[i].clear();
    }
    return 0;
}
