#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ii = pair<int,int>;

class UnionFind{
    private: vi p,rk;
    public:
        UnionFind(int n){
            rk.assign(n,0);
            p.assign(n,0);
            for(int i=0;i<n;i++)p[i]=i;
        }
        ~UnionFind(){};
        int findset(int i){return p[i]==i?i:p[i] = findset(p[i]);}
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

int main(){
    vector<pair<int,ii>> el;
    int c,n,m,a,b,w;
    cin>>c;
    while(c--){
        cin>>n>>m;
        int edgesum=0;
        for(int i=0;i<m;i++){
            cin>>a>>b>>w;
            edgesum+=w;
            el.push_back(make_pair(w,ii(a-1,b-1)));
        }
        sort(el.begin(),el.end());
        int mst=0;
        UnionFind uf(n);
        for(int i=m-1;i>=0;i--){
            pair<int,ii> f = el[i];
            if(!uf.sameset(f.second.first,f.second.second)){
                mst+=f.first;
                uf.unionset(f.second.first,f.second.second);
            }
        }
        cout<<edgesum-mst<<endl;
        el.clear();
        uf.~UnionFind();
    }
    cin>>c;
    return 0;
}
