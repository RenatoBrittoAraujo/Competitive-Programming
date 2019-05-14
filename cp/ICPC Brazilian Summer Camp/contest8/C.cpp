#include <bits/stdc++.h>

using namespace std;

int n,k;

int main(){
	while(scanf("%d%d",&n,&k)!=EOF){
		int sum=0,bit=0;
		do{
			sum+=n;
			bit+=n;
			n=bit/k;
			bit-=n*k;
		}while(n);
		printf("%d\n",sum);
	}
}
