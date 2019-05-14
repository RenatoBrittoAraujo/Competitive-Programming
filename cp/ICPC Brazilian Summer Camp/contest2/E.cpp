#include <bits/stdc++.h>
using namespace std;

using i = pair<int,int>;
using vi = vector<int>;

int n,m,re,a,b,c;
vi fr;

#define MAX_V 100010
#define INF_NUM 100000000

using ii = pair<int, int>;

class UnionFind{
    private: vi p,rk;
    public:
        UnionFind(int n){
            rk.assign(n,0);
            p.assign(n,0);
            for(int i=0;i<n;i++)p[i]=i;
        }
	void clear(){
		this->p.assign(n,0);
		this->rk.assign(n,0);
		for(int i=0;i<n;i++)this->p[i]=i;
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

vector<ii> G[MAX_V];
int distances[MAX_V];

void dijkstra(int source,int N) {
    fill(distances, distances + N + 1, INF_NUM);

    priority_queue< ii, vector<ii>, greater<ii> > to_visit;

    distances[source] = 0;
    to_visit.push(ii(distances[source], source));

    while(!to_visit.empty()) {
        auto d = to_visit.top().first;
        auto v = to_visit.top().second;
        to_visit.pop();
        if (d > distances[v]) continue;

        for(auto i: G[v]) {
            auto i_v = i.first;
            auto i_d = i.second;

            if (distances[v] + i_d < distances[i_v]) {
                distances[i_v]  = distances[v] + i_d;
                to_visit.push(ii(distances[i_v], i_v));
            }
        }
    }
}

bool visited[100010];

int main(){
	while(scanf("%d %d",&n,&m)!=EOF){
		memset(visited,0,sizeof visited);
		fr.clear();
		int ten=0;
		UnionFind uf(n);
		for(int i=0;i<n-1;i++){
			scanf("%d %d %d",&a,&b,&c);
			G[a].push_back(ii(b,c));
			G[b].push_back(ii(a,c));
			uf.unionset(a,b);
		}
		//cout<<"A\n";
		for(int i=0;i<m;i++){
			scanf("%d",&re);
			fr.push_back(re);
		}
		//cout<<"B\n";
		int p=1;
		for(int i=0;i<fr.size();i++)printf("Frind[%d]=%d\n",i,fr[i]);
		dijkstra(1,n+1);
		for(int i=1;i<=n;i++)printf("Distance node %d = %d\n",i,distances[i]);
		int friends=fr.size();
		while(1){
			int md=-1;int mfn=-1;
			for(int i=0;i<fr.size();i++)
				if(distances[fr[i]]>md&&fr[i]!=-1)md=distances[fr[i]],mfn=fr[i];
			if(md==-1)break;
			p=mfn;
			for(int i=0;i<fr.size();i++)if(uf.sameset(mfn,fr[i])){
				printf("SAME SET %d & %d",mfn,fr[i]);fr[i]=-1;friends--;}
			ten+=distances[mfn]*2;
			if(friends==0)break;
		}
		uf.clear();
		for(int i=0;i<=n;i++)G[i].clear();
		printf("%d\n",ten);
	}
	return 0;
}
