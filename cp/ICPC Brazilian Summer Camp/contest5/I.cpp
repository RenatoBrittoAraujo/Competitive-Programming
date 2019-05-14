#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,ans;

int dav[100010],br[100010];

bool dcs(int a,int b){return a>b;}

priority_queue<int> pq;
multiset<int> ms;

vector<int> rd,rb;

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&dav[i]),ms.insert(dav[i]);
	for(int i=0;i<m;i++)scanf("%d",&br[i]),pq.push(br[i]);
	ans=0;	

	int fd=0;
	int fb=0;		
	
	for(int i=0;i<m;i++){
		if(br[i]-*ms.begin()>0)
			fb+=br[i]-*ms.begin(),rb.push_back(br[i]);
	}
	for(int i=0;i<n;i++){
		if(pq.top()-dav[i]>0)
			fd+=pq.top()-dav[i],rd.push_back(dav[i]);
	}
	cout<<fd<<" "<<fb<<endl;
	if(fd&&fb){
		while(1){
			int md=*ms.begin();
			int mb=pq.top();
			ms.erase(ms.begin());
			pq.pop();
			if(md>=mb)break;
			for(int i=0;i<rb.size();i++)fd+=max(rd[i]-md,0);
			for(int i=0;i<rd.size();i++)fb+=max(mb-rb[i],0);
			cout<<fd<<" "<<fb<<endl;
			ans++;
			if(fd>fb)ms.insert(md+1);
			else pq.push(mb-1);
			fd=0;fb=0;
		}
	}

	printf("%d\n",ans);
}
