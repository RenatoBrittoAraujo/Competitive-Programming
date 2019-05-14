#include <bits/stdc++.h>
using namespace std;

int n,m;
bitset<10> r;

int rep[5001];

bool repeatedn(int n){
	if(rep[n]!=-1)return rep[n];
	int v = n;
	r.reset();
	while(v>0){
		if(!r[v%10]){r[v%10]=1;v/=10;}
		else return rep[n]=0;
	}
	return rep[n]=1;
}

int main(){
	memset(rep,-1,sizeof rep);
	while(scanf("%d%d",&n,&m)!=EOF){
	int nr=0;
	for(int i=n;i<=m;i++)
		if(repeatedn(i))nr++;
	printf("%d\n",nr);
	}
}
