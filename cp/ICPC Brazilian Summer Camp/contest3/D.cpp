#include <bits/stdc++.h>

using namespace std;

int dist[101][101];

int n,e,t,m,a,b,c;

void warshall(){
	for(int k=0;k<n+1;k++)
		for(int i=0;i<n+1;i++)
			for(int j=0;j<n+1;j++)
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
}

/*void prd(){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			printf("%d ",dist[i][j]);
		}printf("\n");
	}
}*/

int main(){
	memset(dist,10000,sizeof dist);
	//n=4;
	//prd();
	//printf("COMEÇA\n");
	scanf("%d%d%d%d",&n,&e,&t,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&a,&b,&c);
		dist[a][b]=c;
	}
	for(int i=1;i<=n;i++)dist[i][i]=0;
	//prd();
	warshall();
	//prd();
	int tv=0;
	for(int i=1;i<=n;i++){
		//printf("%d ",dist[i][e]);
		if(dist[i][e]<=t)tv++;
	}
	printf("%d\n",tv);
	return 0;
}

