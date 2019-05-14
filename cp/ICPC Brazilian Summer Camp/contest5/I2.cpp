#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,ans;

int dav[100010],br[100010];

bool dcs(int a,int b){return a>b;}

struct dcmp{
	bool operator() (const int& a,const int& b) const{
		return a>b;
	}
};

set<int,dcmp> brs; 

set<int> davs;

int main(){

	while(1){
		int a;
		for(int i=0;i<3;i++)cin>>a,brs.insert(a);
		for(auto v: brs)cout<<v<<" ";
	}

	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&dav[i]);
	for(int i=0;i<m;i++)scanf("%d",&br[i]);
	ans=0;	

	int fd=0;
	int fb=0;

	if(!(br[0]<=dav[0])){
		while(1){
			sort(dav,dav+n);
			sort(br,br+m,dcs);
			int md = dav[0];
			int mb = br[0];
			if(md>=mb)break;
			for(int i=0;i<m;i++)fd+=max(br[i]-md,0);
			for(int i=0;i<n;i++)fb+=max(mb-dav[i],0);
			//cout<<fd<<" "<<fb<<endl;
			if(fd>fb)dav[0]++;
			else br[0]--;
			ans++;
			fd=0;fb=0;
		}
	}

	//for(int i=0;i<n;i++)cout<<dav[i]<<" ";cout<<endl;
	//for(int i=0;i<m;i++)cout<<br[i]<<" ";cout<<endl;

	printf("%d\n",ans);
}
