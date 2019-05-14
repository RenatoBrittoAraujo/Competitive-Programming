#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;

#define MAX_V 100000

vi G[MAX_V];
int leaf[MAX_V],memo[MAX_V][2];

int mvc(int v,bool flag){
    int ans=0;
    if(memo[v][flag]!=-1)return memo[v][flag];
    else if(leaf[v])ans=flag;
    else if(!flag){
        ans = 0;
        for(int j=0;j<(int)G[v].size();j++){
            ans+=mvc(G[v][j],1);
        }
    }else if(flag){
        ans = 1;
        for(int j=0;j<(int)G[v].size();j++){
            ans+=min(mvc(G[v][j],1),mvc(G[v][j],0));
        }
    }
    return memo[v][flag]=ans;
}

int main(){
    memset(memo,-1,sizeof memo);
    memset(leaf,0,sizeof leaf);
    int v,e;
    cin>>v>>e;
    int x,y;
    G[0].push_back(1);
    for(int i=0;i<v;i++){
        cin>>x>>y;
        G[x].push_back(y);
    }
    for(int i=0;i<e;i++)if(G[i].size()==0)leaf[i]=1;
    int r = min(mvc(0,false),mvc(0,true));
    cout<<r<<endl;
    return 0;
}
