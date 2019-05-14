#include <bits/stdc++.h>

using namespace std;

int n,m,q,t,a,b,c;
string s,r;
map<string,int> stn;

int p[10000000];
int sz[10000000];

int find(int a){
	if(a==p[a])return a;
	else return p[a]=find(p[a]);
}

int getI(int a){return a+n;}

bool sr(int a,int b){
	return find(a)==find(b);
}

bool sg(int a,int b){
	return getI(find(a))==find(b);
}

void join(int a,int b){
	a=find(a);	
	b=find(b);
	if(sz[a]>sz[b])swap(a,b);
	sz[b]+=sz[a];
	p[a]=b;
}

void gjoin(int a,int b){
	if(sg(find(a),find(b))){cout<<"NO\n";return;}
	join(find(a),find(b));
	join(getI(a),getI(b));
	cout<<"YES\n";
}

void ejoin(int a,int b){
	if(sr(find(a),find(b))){cout<<"NO\n";return;}
	cout<<"YES\n";
	join(a,getI(b));
	join(getI(a),find(b));
}

int main(){
	scanf("%d%d%d",&n,&m,&q);
	for(int i=0;i<n;i++){cin>>s;stn[s]=i+1;}
	for(int i=0;i<2*n+10;i++){p[i]=i;sz[i]=1;}
	for(int i=0;i<m;i++){
		for(int i=1;i<2*n+2;i++)cout<<p[i]<<" ";cout<<endl;
		scanf("%d",&a);cin>>s>>r;
		if(a==1)gjoin(stn[s],stn[r]);
		else ejoin(stn[s],stn[r]);
	}
	for(int i=1;i<2*n+2;i++)cout<<p[i]<<" ";cout<<endl;
	for(int i=0;i<q;i++){
		cin>>s>>r;
		if(sg(stn[s],stn[r]))cout<<1<<endl;
		else if(sr(stn[s],stn[r]))cout<<2<<endl;
		else cout<<3<<endl;
	}
}


