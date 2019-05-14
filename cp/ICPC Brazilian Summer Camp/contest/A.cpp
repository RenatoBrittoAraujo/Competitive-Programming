#include <bits/stdc++.h>
using namespace std;
#define err 0.0000001
int main(){
	double a,sum=0;int v=0;
	scanf("%lf",&a);
	do{
		v++;
		sum+=a;
		if(sum>360)sum-=360.0;
		if(fabs(sum-360)<err||sum<err)break;
	}while(1);
	printf("%d\n",v);
}
