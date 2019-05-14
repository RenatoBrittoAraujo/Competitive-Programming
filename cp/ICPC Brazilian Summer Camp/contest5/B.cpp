#include <bits/stdc++.h>

using namespace std;

int dif[100010][100010];

#define INF 200000
int n,m,a,b,w;
char op;

void warshall(int i,int j){
	for(int k=0;k<n;k++)
	if(dif[i][k]!=INF&&dif[k][j]!=INF)
		dif[i][j]=dif[i][k]+dif[k][j];
}

int main(){
	while(scanf("%d%d",&n,&m)!=EOF){
		memset(dif,INF,sizeof dif);
		for(int i=0;i<n;i++){
			dif[i][i]=0;	
		}	
		for(int i=0;i<m;i++){
			scanf(" %c",&op);
			if(op=='!'){
				scanf("%d%d%d",&a,&b,&w);
				dif[a][b]=w;
				dif[b][a]=-w;
			}else{
				scanf("%d%d",&a,&b);
				warshall(a,b);warshall(b,a);
				if(dif[a][b]!=INF)printf("%d\n",dif[a][b]);
				else printf("UNKNOWN\n");
			}

		}
	}
}	

