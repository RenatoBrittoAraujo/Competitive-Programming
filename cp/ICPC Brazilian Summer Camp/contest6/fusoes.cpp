#include <bits/stdc++.h>

using namespace std;

int n,k,a,b;
char c;

int uf[100010];

void initialize_UFDS(int n){
	for(int i=0;i<=n;i++)uf[i]=i;
}

int find_UFDS(int q){
	if(uf[q]==q)return q;
	else return uf[q] = find_UFDS(uf[q]);
}

bool sameset_UFDS(int a,int b){
	int pa = find_UFDS(a);
	int pb = find_UFDS(b);
	return pa==pb;
}

void union_UFDS(int a,int b){
	int pa = find_UFDS(a);
	int pb = find_UFDS(b);
	if(sameset_UFDS(pa,pb))return;
	if(pa>pb)uf[pa]=pb;
	else uf[pb]=pa;
}

int main(){
	scanf("%d%d",&n,&k);
	initialize_UFDS(n);
	for(int i=0;i<k;i++){
		scanf(" %c%d%d",&c,&a,&b);
		if(c=='C')cout<<(sameset_UFDS(a,b)?'S':'N')<<endl;
		else union_UFDS(a,b);
	}	
}
