#include <bits/stdc++.h>

using namespace std;

int c,p,n;double sp,minv;
double tv;

#define pi acos(-1.0)

int main(){
	printf("PI = %.9f\n",pi);
	scanf("%d",&c);
	while(c--){
		scanf("%d%d",&p,&n);
		tv=0;
		minv=100000;
		for(int i=0;i<p;i++)
			scanf("%lf",&sp),tv+=2*pi*sp,minv=min(minv,sp*2*pi);
		printf("%.4f",tv/double(n+1));
	}
	return 0;
}
