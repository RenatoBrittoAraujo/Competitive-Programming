#include <bits/stdc++.h>
using namespace std;

int a;

bool mvag[181];

void vag(){
	int h=0,m=0,r=0,delta;
	while(1){
		m+=1;
		if(m==60){m=0;r++;}
		if(r==12)break;
		if(m%12==0)h++;
		delta = min(abs(m-h),abs(60-m+h));
		mvag[delta*6]=1;
	}
}

int main(){
	memset(mvag,0,sizeof mvag);
	vag();
	while(scanf("%d",&a)!=EOF){
		printf("%c\n",(mvag[a]?'Y':'N'));
	}
	return 0;
}
