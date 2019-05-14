#include <bits/stdc++.h>
using namespace std;
vector<int> va;
int main(){
	int v,n,r,av=100;
	scanf("%d",&n);
	v=n;
	for(int i=0;i<n;i++){
		scanf("%d",&r);
		va.push_back(r);
	}
	for(int i=n-1;i>=0;i--){
		if(va[i]>=av){v--;}
		av=va[i];
	}
	printf("%d\n",v);
}
