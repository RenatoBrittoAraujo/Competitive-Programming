#include <bits/stdc++.h>

using namespace std;

int a,b,k,c,ans;

void cut(int s1,int s2,int v){
	if(s1*s2<k)return;
	if(s1*s2==k){ans=min(ans,v);return;}
	if(v>1000000)return;
	int lc=min(k,s1),ll=min(k,s2);
	while(1){
		lc--;
		if(lc<=k&&lc*ll>=k)cut(lc,ll,v+=ll*ll);
		ll--
	}
}

int main(){
	memset()
	scanf("%d",&c);
	while(c--){
		ans=100000000;
		scanf("%d%d%d",&a,&b,&k);
		
	}
	return 0;
}
