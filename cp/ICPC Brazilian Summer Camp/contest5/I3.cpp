#include <bits/stdc++.h>

using namespace std;

int n,m,a,b,ans;

bool dcs(int a,int b){return a>b;}

struct dcmp{
	bool operator() (const int& a,const int& b) const{
		return a>b;
	}
};

multiset<int,dcmp> brs; 

multiset<int> davs;

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&a),davs.insert(a);
	for(int i=0;i<m;i++)scanf("%d",&a),brs.insert(a);
	ans=0;	

	int fd=0;
	int fb=0;
	bool cas;
	
	int md = *davs.begin();
	int mb = *brs.begin();
	
	for(auto v: brs)fd+=max(v-md,0);
	for(auto v: davs)fb+=max(mb-v,0);

	if(!(md>=mb)){
		while(1){
			if(md>=mb)break;
			cout<<fd<<" "<<fb<<endl;	
			if(fd>fb){
      				cas = 0;
				davs.erase(davs.begin());
				davs.insert(md+1);
				fd=0;
				fb--;
			}else{
				cas = 1;
				brs.erase(brs.begin());
				brs.insert(mb-1);
				fb=0;
				fd--;
			}
			md = *davs.begin();
			mb = *brs.begin();
			if(!cas)for(auto v: brs)fd+=max(v-md,0);
			else for(auto v: davs)fb+=max(mb-v,0);
			ans++;
		}
	}

	printf("%d\n",ans);
}
