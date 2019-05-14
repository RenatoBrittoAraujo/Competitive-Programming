#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ii = pair<int,int>;
using vii = vector<ii>;

vii mtn[100010];

int a,b,c,n,f;

int nodep[100010][2];
bool hasfr[100010];
bool visited[100010];

void dfsdp(int u){
	printf("Visiting node %d\n",u);
	visited[u]=1;
	int s1=0,s2=0,ma=0;
	for(auto v: mtn[u]){
		int nd=v.first;
		if(!visited[nd]){
		nodep[nd][0]+=v.second;
		dfsdp(nd);
		if(hasfr[nd])hasfr[u]=1;
		else continue;
		printf("Current node has friends\n");
		s1+=nodep[nd][0];
		if(ma<nodep[nd][0]){
			ma=nodep[nd][0];
			s2=nodep[nd][1];}
		}
	}
	//if(u==1){printf("NODE 1 -> bigs1=%d bigs2=%d s1=%d\n",bigs1,bigs2,s1);ans=s1-bigs1+bigs2;return;}
	nodep[u][0]+=s1,nodep[u][1]=s1+s2-ma;
	printf("Exiting node %d. Results (%d,%d)\n",u,nodep[u][0],nodep[u][1]);
}

vjudgeint main(){
	while(scanf("%d%d",&n,&f)!=EOF){
		memset(nodep,0,sizeof nodep);
		memset(hasfr,0,sizeof hasfr);
		for(int i=0;i<n-1;i++){
			scanf("%d%d%d",&a,&b,&c);
			mtn[a].push_back(ii(b,c));
			mtn[b].push_back(ii(a,c));
		}
		for(int i=0;i<f;i++)
			scanf("%d",&a),hasfr[a]=1;
		memset(visited,0,sizeof visited);
		dfsdp(1);
		for(int i=1;i<=n;i++)mtn[i].clear();
		printf("%d\n",nodep[1][1]);
	}
	return 0;
}
