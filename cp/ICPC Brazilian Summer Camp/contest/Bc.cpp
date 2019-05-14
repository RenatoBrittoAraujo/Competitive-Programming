#include <bits/stdc++.h>
using namespace std;

int n;
double mc=0;
int p[100010];
int s1,s2,cs,va,cs2,in;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]),mc+=p[i];
	bool f=0;
	mc/=2.0;
	for(int i=0,cs=0;i<n;i++){
		for(int j=i+1;cs+p[j]<=mc&&j<n;j++){
			cs+=p[j];
			s1=cs;
			for(int k=j+1;k<n;k++){
				cs2 = 0;
				cs2+=p[k];
				if(cs2>mc-s1)break;
				s2=mc-s1;
				va=0,in=k+1;
				while(va<s1){va+=p[in++];if(in>=n)in=0;}
				if(va!=s1){break;}
				va=0;
				while(va<s2){va+=p[in++];if(in>=n)in=0;}
				if(in-1!=i){break;}
				if(va!=s2){break;}
				else{f=1;break;}
			}if(f)break;
		}if(f)break;
	}
	if(f)printf("Y\n");
	else printf("N\n");
	return 0;
}
