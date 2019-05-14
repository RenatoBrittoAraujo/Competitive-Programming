#include <bits/stdc++.h>
using namespace std;

int ca;

int tr[10010][2];

double dp(int i,int disct,bool v){
	if(i==ca)return 0;
	double va = tr[i][0]*
	else return min(dp(i+1,)+tr[i][0]*(
}

int main(){
	scanf("%d",&ca);
	for(int i=0;i<ca;i++){
		scanf("%d%d",&tr[ca][0],&tr[ca][1]);
	}
	printf("%.2f\n",dp(0,-1));
}
