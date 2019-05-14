#include <bits/stdc++.h>

using namespace std;

int difs[100010];
int x,y;

int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(i>0)difs[i-1]=x-y;
		y=x;
	}
	sort(difs,difs+n-1);
	int sum=0;
	for(int i=0;i<n-k;i++)sum+=difs[i];
	sum+=k;
	printf("%d\n",sum);
}
