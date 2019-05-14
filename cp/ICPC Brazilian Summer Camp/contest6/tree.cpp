#include <bits/stdc++.h>

using namespace std;

int n,a,b;

const int N = 1000100;

vector<int> G[1000100];
int c[1000100];
int nc[1000100];
set<int> colors[1000100];

void dfs(int v) {
	colors[v].insert(c[v]);
	for (int w : G[v]) {
		dfs(w);
		if (colors[w].size() > colors[v].size())
			swap(colors[v], colors[w]);
		for (int c : colors[w])
			colors[v].insert(c);
	}
	nc[v] = colors[v].size();
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		G[a].push_back(i);
		c[i]=b;
	}
	dfs(0);
	for(int i=1;i<=n;i++){
		printf("%d",nc[i]);if(i!=n)printf(" "); 
	}	
	printf("\n");
}
