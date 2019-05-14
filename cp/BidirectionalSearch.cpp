#include <bits/stdc++.h>

using namespace std;

set<int> fow,bac;
map<int, bool> dbac,dfow;

int troca(int i,int j,int k,int v){
    string r,in=to_string(v);
    int p=0;
    while(p<k){
        if(!(p>i-1&&p<j+1))r+=in[p];
        p++;
    }
    for(p=i;p<j+1;p++)r+=in[p];
    p=k;
    while(p<in.size()){
        if(!(p>i-1&&p<j+1))r+=in[p];
        p++;
    }
    return stoi(r);
}

int ini,obj,n;

void bfs(bool q){
    queue<int> tv;
    if(q){
        bac.insert(obj);
        tv.push(obj);
        while(!tv.empty()){
            int u = tv.front();
            tv.pop();
            //cout<<"Node "<<u<<" distance "<<dbac[u]<<endl;
            if(dbac[u]==1)continue;
            if(u==ini)return;
            for(int i=0;i<n-1;i++)for(int j=i;j<n;j++)for(int k=0;k<n+1;k++){
                if((k>=i&&k<=j+1)||i-j==n)continue;
                int v = troca(i,j,k,u);
                //cout<<"i,j,k,u = "<<i<<" "<<j<<" "<<k<<" "<<u<<endl;
                //cout<<v<<endl;
                if(bac.find(v)==bac.end()){
                    if(u==obj)
                        bac.insert(v),tv.push(v),dbac[v]=0;
                    else
                        bac.insert(v),dbac[v]=1;

                }
            }
        }
    }else{
        fow.insert(ini);
        dfow[ini]=0;
        tv.push(ini);
        while(!tv.empty()){
            int u = tv.front();
            tv.pop();
            if(dfow[u]==1)continue;
            for(int i=0;i<n-1;i++)for(int j=i;j<n;j++)for(int k=0;k<n+1;k++){
                int v = troca(i,j,k,u);
                if(fow.find(v)==fow.end()){
                    if(u==ini)
                        fow.insert(v),dfow[v]=0,tv.push(v);
                    else
                        fow.insert(v),dfow[v]=1;
                }
            }
        }
    }
}

int main(){
    int a,ca=1;
    string r;
    while(cin>>n,n){
        for(int i=0;i<n;i++)
            cin>>a,r+=to_string(a);
        ini = stoi(r),r.clear();
        obj = stoi(string("123456789").substr(0,n));
        int r=0;
        if(ini!=obj){
            bfs(1);
            if(bac.find(ini)!=bac.end())r=dbac[ini]+1;
        else{
            bfs(0);
            bool found=0;
            for(auto v: fow)if(bac.find(v)!=bac.end()){
                r=dfow[v]+dbac[v]+2;found=1;break;}
            if(!found)r=5;
        }
        string local = to_string(obj);
        reverse(local.begin(),local.end());
        if(local==to_string(ini)&&n>2)r--;
        }
        cout<<"Case "<<ca++<<": "<<r<<endl;
        dfow.clear();dbac.clear();fow.clear();bac.clear();
    }
    return 0;
}
