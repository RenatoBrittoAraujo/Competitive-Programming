#include <bits/stdc++.h>
using namespace std;

using ii = pair<int,int>;

int n;double mc=0;
int p[100010];
int s1,s2,cs,cs2,in,va;
bool f=0;
set<int> forbbiden;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]),mc+=p[i];
	mc/=2.0;
	int cl=0;
	for(int i=0;i<n;i++){
		cs=0;
		cl+=p[i];
		if(cl>mc)break;
		for(int j=i+1;cs<=mc&&j<n;j++){
			cs+=p[j];
			if(forbbiden.find(cs)!=forbbiden.end())continue;
			s1=cs;
			for(int k=j+1;k<n;k++){
				cs2 = 0;
				cs2+=p[k];
				if(cs2>mc-s1){forbbiden.insert(s1);break;}
				s2=mc-s1;
				if(forbbiden.find(s2)!=forbbiden.end())continue;
				va=0,in=k+1;
				while(va<s1){va+=p[in++];if(in>=n)in=0;}
				if(va!=s1){forbbiden.insert(s1);forbbiden.insert(s2);break;}
				va=0;
				while(va<s2){va+=p[in++];if(in>=n)in=0;}
				if(in-1!=i){forbbiden.insert(s1);forbbiden.insert(s2);break;}
				if(va!=s2){forbbiden.insert(s1);forbbiden.insert(s2);break;}
				else{f=1;break;}
			}if(f)break;
		}if(f)break;
	}
	if(f)printf("Y\n");
	else printf("N\n");
	return 0;
}
