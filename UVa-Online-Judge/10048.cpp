#include <bits/stdc++.h>

using namespace std;

float dist(int x1,int y1,int x2,int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

using vi = vector<int>;
using ii = pair<int,int>;
using vii = vector<ii>;
using vpiii = vector<pair<int,ii>>;

class UnionFind{
    private:
        vi rk,p;
    public:
        UnionFind(int n){
            rk.assign(n,0);
            p.assign(n,0);
            for(int i=0;i<n;i++)p[i]=i;
        }
        int findset(int i){return p[i] == i?i:p[i] = findset(p[i]);}
        bool sameset(int i,int j){return findset(i)==findset(j);}
        void unionset(int i,int j){
            if(!sameset(i,j)){
                int x = findset(i);
                int y = findset(j);
                if(rk[x]>rk[y])p[y]=x;
                else{
                    p[x]=y;
                    if(rk[x]==rk[y])rk[y]++;
                }
            }
        }
};

vii G[101];
bool dis[101];

int dfs_d(int u,int d,int cmax){
    dis[u]=1;
    int maxd=-1;
    for(auto v: G[u]){
        int mv = max(cmax,v.first);
        if(v.second==d)return mv;
        else if(dis[v.second]==0)maxd = max(maxd,dfs_d(v.second,d, mv));
    }
    return maxd;
}

int main(){
    int v,e,q,w,x,y;
    vpiii el;
    int ca =1;
    while(cin>>v>>e>>q,bool(v+e+q)){
        if(ca>1)cout<<endl;
        for(int i=0;i<e;i++){
            cin>>x>>y>>w;
            el.push_back(make_pair(w,ii(x-1,y-1)));
        }
        sort(el.begin(),el.end());
        UnionFind uf(v);
        int t = el.size();
        for(int i=0;i<t;i++){
            pair<float,ii> f = el[i];
               if(!uf.sameset(f.second.first,f.second.second)){
                uf.unionset(f.second.first,f.second.second);
                G[f.second.first].push_back(ii(f.first,f.second.second));
                G[f.second.second].push_back(ii(f.first,f.second.first));
            }
        }
        cout<<"Case #"<<ca<<endl;
        ca++;
        for(int i=0;i<q;i++){
            memset(dis,0,sizeof dis);
            cin>>x>>y;
            int r = dfs_d(x-1,y-1,-1);
            if(r==-1)cout<<"no path\n";
            else cout<<r<<endl;
        }
        for(int i=0;i<v;i++)G[i].clear();
        el.clear();
    }
    return 0;
}
