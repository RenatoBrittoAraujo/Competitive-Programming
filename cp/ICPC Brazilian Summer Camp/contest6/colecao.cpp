#include <bits/stdc++.h>

using namespace std;

int n,q;
int a,b,c;

int p[100010];
int ta[100010];

stack<pair<int,int>> op,ot;

void init(){
	for(int i=0;i<=n;i++){
		p[i]=i;ta[i]=1;
	}
}	

int findp(int a){return p[a]==a?a:p[a]=findp(p[a]);}

void join(int a,int b){
	int pa = findp(a);
	int pb = findp(b);
	if(ta[pa]>ta[pb])
		swap(pa,pb);
	op.emplace(pa,p[pa]);
	ot.emplace(pb,ta[pb]); 
	ta[pb]+=ta[pa];
	p[pa]=pb;
}

bool query(int a,int b){return findp(a)==findp(b);}

void rollback(){
	p[op.top().first]=op.top().second;
	ta[ot.top().first]=op.top().second;
	op.pop();ot.pop();
}

int main(){
	scanf("%d%d",&n,&q);
	init();
	for(int i=0;i<q;i++){
		scanf("%d",&a);
		if(a==3)rollback();
		else{
			scanf("%d%d",&b,&c);	
			if(a==1)printf("%d\n",query(a,b));
			else join(a,b);
		}
	}
}
