#include <bits/stdc++.h>

using namespace std;

int v,e,q,a,b,c;

using vi = vector<int>;
using ii = pair<int,int>;

vector<ii> G[510];

int distances[510];

int dijkstra(int source, int destiny, int N) {
    memset(distances,1000000,sizeof distances);
    priority_queue< ii, vector<ii>, greater<ii> > to_visit;
    distances[source] = 0;
    to_visit.push(ii(distances[source], source));
    while(!to_visit.empty()) {
        auto d = to_visit.top().first;
        auto ve = to_visit.top().second;
        to_visit.pop();
        if (d > distances[ve]) continue;
        for(auto i: G[ve]) {
            auto i_v = i.first;
            auto i_d = i.second;
            if (distances[ve] + i_d < distances[i_v]) {
                distances[i_v]  = distances[ve] + i_d;
                to_visit.push(ii(distances[i_v], i_v));
            }
        }
    }

    return distances[destiny];
}

int main(){
	while(scanf("%d%d",&v,&e),bool(v+e)){
		for(int i=0;i<e;i++){	
			scanf("%d%d%d",&a,&b,&c);
			G[a].push_back(ii(b,c));
		}
		scanf("%d",&q);
		for(int i=0;i<q;i++){
			scanf("%d%d",&a,&b);
			int dist = dijkstra(a,b,v);
			if(dist>=1000000)printf("Nao e possivel entregar a carta\n");
			else printf("%d\n",dist);
		}
		for(int i=0;i<v;i++)G[i].clear();
		printf("\n");
	}
	return 0;
}
