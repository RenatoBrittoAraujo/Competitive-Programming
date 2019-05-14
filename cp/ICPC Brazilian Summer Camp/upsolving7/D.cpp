#include <bits/stdc++.h>

using namespace std;

vector<int> DAG[100010];

double dfs(int u,int p){
	double sum = 0;
	for(auto v: DAG[u]){
		if(v!=p){
			sum+=dfs(v,u)+1;}
	}
	int c = DAG[u].size();
	return sum?sum/(c-(p!=-1)):0;
}

int main(){
	int n,a,b;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		scanf("%d%d",&a,&b);a--;b--;
		DAG[a].push_back(b);
		DAG[b].push_back(a);
	}
	printf("%.12f\n",dfs(0,-1));
}
