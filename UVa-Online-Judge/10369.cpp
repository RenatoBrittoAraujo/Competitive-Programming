#include <bits/stdc++.h>

using namespace std;

float dist(int x1,int y1,int x2,int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

using vi = vector<int>;
using ii = pair<int,int>;
using vpiii = vector<pair<float,ii>>;

int tp[600][2];

class UnionFind{
    private:
        vi rk,p;
        int channels;
    public:
        UnionFind(int n){
            rk.assign(n,0);
            p.assign(n,0);
            for(int i=0;i<n;i++)p[i]=i;
            channels = n;
        }
        int findset(int i){return p[i] == i?i:p[i] = findset(p[i]);}
        bool sameset(int i,int j){return findset(i)==findset(j);}
        void unionset(int i,int j){
            if(!sameset(i,j)){
                channels--;
                int x = findset(i);
                int y = findset(j);
                if(rk[x]>rk[y])p[y]=x;
                else{
                    p[x]=y;
                    if(rk[x]==rk[y])rk[y]++;
                }
            }
        }
        int get_channels(){
            return channels;
        }
};

int main(){
    int s,p,c,x,y;
    cin>>c;
    vpiii el;
    while(c--){
        cin>>s>>p;
        for(int i=0;i<p;i++)cin>>tp[i][0]>>tp[i][1];
        for(int i=0;i<p;i++){
            for(int j=i+1;j<p;j++){
                el.push_back(make_pair(dist(tp[i][0],tp[i][1],
                    tp[j][0],tp[j][1]),ii(i,j)));
            }
        }
        sort(el.begin(),el.end());
        UnionFind uf(p);
        int t = el.size();
        float minD;
        for(int i=0;i<t;i++){
            pair<float,ii> f = el[i];
            if(!uf.sameset(f.second.first,f.second.second)){
                uf.unionset(f.second.first,f.second.second);
            }
            if(uf.get_channels()==s){minD=el[i].first;break;}
        }
        printf("%.2f\n",minD);
        el.clear();
    }
    return 0;
}
