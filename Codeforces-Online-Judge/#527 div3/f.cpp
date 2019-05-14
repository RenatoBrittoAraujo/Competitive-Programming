#include<bits/stdc++.h>

using namespace std;

int va[200010];
vector<int> G[200010];
int dis[200010];

void bfs_d(int iv) {
    memset(dis, -1, sizeof dis);
    int initial_vertice = iv;
    queue<int> to_visit;
    to_visit.push(initial_vertice);
    dis[initial_vertice] = 0;
    while(!to_visit.empty()) {
        auto u = to_visit.front();
        to_visit.pop();
        for (auto v: G[u]) {
            if (dis[v] == -1) {
                dis[v] = dis[u] + 1;
                to_visit.push(v);
            }
        }
    }
}

int calcd(int iv,int n){
    bfs_d(iv);
    int s=0;
    for(int i=0;i<n;i++){
        s+=dis[i]*va[i];
    }
    return s;
}

using ii = pair<int,int>;

int main()
{
    int n;
    cin>>n;
    vector<ii> it;
    for(int i=0;i<n;i++){cin>>va[i];it.push_back(ii(va[i],i));}
    sort(it.begin(),it.end());
    vector<int> test;
    for(int i=0;i<5;i++)
        test.push_back(it[i].second);
    int x,y;
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        G[x-1].push_back(y-1);
        G[y-1].push_back(x-1);
    }
    int mv=0;
    for(int i=0;i<5;i++){
        int v = calcd(test[i],n);
        if(v>mv)mv=v;

    }
    cout<<mv<<endl;
    return 0;
}