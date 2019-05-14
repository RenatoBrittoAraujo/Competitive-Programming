#include <bits/stdc++.h>

using namespace std;

int n,k;

int ci[501],cms[501];

vector<bitset<501>> ps;
set<int> ans;

void finds(int i,bitset<501> mask,int sum){
	if(sum==k){ps.push_back(mask);return;}
	if(i+1>n)return;
	if(cms[i+1]+sum>=k)finds(i+1,mask,sum);
	mask[i]=1;
	sum+=ci[i];
	if(sum<=k)finds(i+1,mask,sum);
}

void subsets(int sum,bitset<501> mask){
	ans.insert(sum);
	int i=0;
	while(i<n&&!mask[i])i++;
	if(i>=n)return;
	mask[i]=0;
	subsets(sum,mask);
	sum+=ci[i];
	subsets(sum,mask);
}

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&ci[i]);
	sort(ci,ci+n);
	for(int i=n-1;i>-1;i--){
		if(i<n-1)cms[i]=cms[i+1]+ci[i];
		else cms[i]=ci[i];
	}
	finds(0,bitset<501>(),0);
	for(int i=0;i<ps.size();i++){
		subsets(0,ps[i]);
	}	
	printf("%d\n",ans.size());
	int i=0;
	for(auto v: ans){printf("%d",v);if(i!=ans.size()-1)printf(" ");i++;}
	printf("\n");
}
