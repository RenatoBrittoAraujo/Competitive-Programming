#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using ii = pair<int,int>;
const int mod = 1e9+7;
#define ff first
#define ss second
#define pb push_back
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define pr(x) printf("%d",x)
#define prl(x) printf("%lld",x)
#define pbr() printf("\n");
const int N = 1e5+10;

ii rck[102];
int n,d;
int t,ca=1;

int main(){
	sc(t);
	while(t--){

		char c;int x;
		sc(n);sc(d);
		rck[0]={0,0};
		rck[n+1]={d,0};
		for(int i=1;i<=n;i++){
			scanf(" %c-%d",&c,&x);
			rck[i]={x,c=='S'};
		}
		bool f=1;
		int ans = 0;
		int p = 0;
		for(int i=1;i<=n+1;i++){
			if(rck[i].ss==0){
				ans=max(ans,rck[i].ff-p);
				p=rck[i].ff;
			}else{
				if(f){
					ans=max(ans,rck[i].ff-p);
					p=rck[i].ff;
					rck[i].ss=2;
				}
				f=!f;
			}
		}
		for(int i=n;i>=0;i--){
			if(rck[i].ss<2){
				ans=max(ans,p-rck[i].ff);
				p=rck[i].ff;
			}
		}
		printf("Case %d: %d\n",ca++,ans);
	}	
	return 0;
}


