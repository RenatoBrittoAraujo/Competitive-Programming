#include <bits/stdc++.h>

using namespace std;

#define INF 10000000

vector<int> G[101];

int n,m,r1,r2;
int ai[101],bi[101];
int nodea[101]={0};
int nodeb[101]={0};

int p[101];

int find(int u){
	if(u==p[u])return u;
	else return p[u]=find(p[u]);
}

void join(int a,int b){
	a=find(a);b=find(b);
	if(b>a)p[b]=a;
	else p[a]=b;
}

int main(){
	for(int i=0;i<=n;i++)p[i]=i;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){scanf("%d",&ai[i]);}
	for(int i=0;i<n;i++){scanf("%d",&bi[i]);}
	for(int i=0;i<m;i++){
		scanf("%d%d",&r1,&r2);
		join(r1,r2);
	}
	bool val=1;
	cout<<"PARO\n";
	for(int i=1;i<=n;i++){
		nodea[p[i]]+=ai[i];
		nodeb[p[i]]+=bi[i];
		if(nodea[i]!=nodeb[i]){val=0;break;}
	}
	if(!val)printf("NO\n");
	else{
		cout<<"VAL\n";
	}
}
