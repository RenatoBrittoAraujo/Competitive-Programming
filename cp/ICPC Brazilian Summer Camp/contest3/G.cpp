#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

int c,n,m,bt;
int tlgs[101];
int mem[(1<<16)];

int prcs(int a){
	if(mem[a]!=-1)return mem[a];
	if(a==0){return mem[a]=1;}
	int md=10000,v,i,j;
	for(j=0;j<m;j++){
		v = a^tlgs[j];
		bool val=1;
		bitset<16> v1(a),v2(v); 
		for(i=0;i<16;i++)
			if(!v1[i]&&v2[i]){val=0;break;}
		if(!val)continue;
		md = min(md,prcs(v)); 
	}
	return mem[a]=md+1;
}

int main(){
	/*while(1){
		scanf("%d%d",&c,&n);
		for(int i=0;i<4;i++)
		printf("!(%d)&(%d) = %s\n",c&(1<<i),n&(1<<i),(c&(1<<i))&&(n&(1<<i))?"BREAK":"OK");
	}*/
	scanf("%d",&c);
	while(c--){
		memset(mem,-1,sizeof mem);
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++){
				scanf("%d",&bt);if(bt)tlgs[i]+=(1<<j);}
		int v = prcs((1<<n)-1);
		if(v>=300)printf("IMPOSSIBLE\n");
		else printf("%d\n",v-1);
	}
	return 0;
}
