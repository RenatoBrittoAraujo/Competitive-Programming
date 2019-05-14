#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,c;
int p[101];

int find(int a){if(a==p[a])return a;
		else return p[a] = find(p[a]);}

int join(int a,int b){
	int pa = find(a);
	int pb = find(b);
	if(pa>pb)p[pb]=pa;
	else p[pa]=pb;
}

vector<int> l[101];

int main(){
	bool v=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)p[i]=i;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		for(int j=0;j<a;j++){
 			scanf("%d",&b);
			if(b)v=1;
			l[b].push_back(i);
		}
	}
	for(int i=0;i<=m;i++)
		for(int j=1;j<l[i].size();j++)
			join(l[i][j],l[i][j-1]);
	int ans=0;
	for(int i=0;i<=n;i++){if(p[i]==i)ans++;}cout<<endl;
	printf("%d\n",(!v?ans:ans-1));
}
