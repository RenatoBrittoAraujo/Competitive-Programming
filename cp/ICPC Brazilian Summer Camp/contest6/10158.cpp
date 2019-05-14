#include <bits/stdc++.h>

using namespace std;

const int N = 10010*2;
int n,c,x,y,pa,pb;
int f[N],sz[N];

void init(){
	for(int i=0;i<=2*n+10;i++){
		f[i]=i;
		sz[i]=1;
	}

}

int finds(int a){
	if(f[a]==a)return a;
	else return f[a]=finds(f[a]);
}

void findf(int a,int b){pa=finds(a);pb=finds(b);}
bool friends(int a,int b){return pa==pb;}
int eID(int a){return a+n;}
bool enemies(int a,int b){return pa==eID(b);}

void join(int a,int b){
	if(a==b)return;
	if(sz[a]>sz[b])swap(a,b);
	sz[b]+=sz[a];
	f[a]=b;
}

void setfriend(){
	if(enemies(pb,pa)){cout<<-1<<endl;return;}
	join(pa,pb);
	join(eID(pa),eID(pb));
}

void setenemy(){
	if(friends(pa,pb)){cout<<-1<<endl;return;}	
	join(pa,eID(pb));
	join(pb,eID(pa));
}


int main(){
	scanf("%d",&n);
	init();
	while(scanf("%d%d%d",&c,&x,&y),c!=0){
		findf(x,y);
		if(c==1)setfriend();
		if(c==2)setenemy();
		if(c==3)printf("%d\n",friends(x,y));
		if(c==4)printf("%d\n",enemies(x,y));
		if(c==5){for(int i=0;i<=n;i++)printf("%d ",f[i]);printf("\n");}
	}
}
