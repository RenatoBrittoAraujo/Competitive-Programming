#include <bits/stdc++.h>

using namespace std;

#define INF 1000000

int ca,n,m,v;
char ch;

int mp[1001][1001];
int dist[1001][1001];

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

bool visited[1001];

vector<int> G[1001];

void bfs_dist(int iv){
    memset(visited,0,sizeof visited);
    queue<int> q;
    q.push(iv);
    dist[iv][iv]=0;
    visited[iv]=1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: G[u]){
            dist[v][iv]=dist[iv][v]=min(dist[v][iv],dist[u][iv]+1);
            if(!visited[v])
                q.push(v),visited[v]=1;
        }
    }
}

void prd(){
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<<dist[i][j]<<' ';
		}cout<<endl;
	}
}

int main(){
	scanf("%d",&ca);
	while(ca--){
		scanf("%d%d",&m,&n);
		v=1;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				scanf(" %c",&ch);
				if(ch=='.')mp[i][j]=v++,cout<<i<<' '<<j<<' '<<v-1<<endl;
				else mp[i][j]=0;
			}
		
		int i=0,j=0;
		for(int k=1;k<v;k++){
		    while(mp[i][j]==0){j++;if(j==m){i++;j=0;}}
		    for(int r=0;r<4;r++){
		        int v1 = i+dx[r],v2 = j+dy[r];
		        if(!(v1>-1&&v1<n&&v2>-1&&v2<m))continue;
		        if(mp[v1][v2]!=0){
		            int l=mp[v1][v2];
		            G[k].push_back(l);
		            G[l].push_back(k);
				cout<<"EGDE "<<k<<' '<<l<<endl;
		        }
		    }
		    j++;if(j==m){i++;j=0;}
		}
		memset(dist,INF,sizeof dist);
		for(int i=0;i<v;i++)bfs_dist(i),prd;
		int ans=INF;
		for(int i=0;i<v;i++)
			for(int j=0;j<v;j++)
				ans=min(ans,dist[i][j]);
		printf("%d\n",ans);
		for(int i=0;i<v;i++)G[i].clear();
	}
}
