#include <bits/stdc++.h>

using namespace std;

set<string> paths;

int c,n,m,ini,fin;char r,l;

vector<int> G[16];

map<char,int> ctoi;
map<int,char> itoc;

string ans;

int dist[16][16];

int dptsp[16][16];

int bms;

int tsp(int n,int b){
	if();
	
}

void warshall(){
	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				dist[i][j]=min(dist[i][j],max(dist[i][k],dist[k][j]));
}

int main(){
	scanf("%d",&c);
	while(c--){
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%c",&r);
			int v = c-65;
			if(i==0)ini=v;
			if(i==n-1)fin=v;
			ctoi[r]=i;
			itoc[i]=r;
		}
		memset(dist,10000,sizeof dist);
		for(int i=0;i<m;i++){
			scanf("%c %c",&r,&l);
			int v1 = ctoi[r];
			int v2 = ctoi[l];
			G[v1].push_back(v2);
			G[v2].push_back(v1);
			dist[v1][v2]=1;
			dist[v2][v1]=1;
		}
		warshall();
		bms=(1<<n)-1;
		tsp(ini,0);
		printf("%s",ans);
	}
	return 0;
}
