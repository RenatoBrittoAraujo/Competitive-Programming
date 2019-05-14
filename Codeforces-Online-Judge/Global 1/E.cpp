//TEMPLATE DO RENATO SINCE 1929
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back
#define ins insert
#define eb emplace_back
using vi = vector<int>;
const int N = 2e5+10;

int n;ll x;
ll dif1[N],dif2[N];

int main(){
	scanf("%d",&n);
	ll a,b,c,d;
	ll an;
	for(int i=0;i<n;i++){
		scanf("%lld",&x);
		if(i>0)dif1[i-1]=an-x;
		else a=x;
		an=x;
		if(i==n-1)b=x;
	}
	for(int i=0;i<n;i++){
		scanf("%lld",&x);
		if(i>0)dif2[i-1]=an-x;
		else c=x;
		an=x;
		if(i==n-1)d=x;
	}
	
	//for(int i=0;i<n-1;i++)cout<<dif1[i]<<' ';cout<<endl;
	//for(int i=0;i<n-1;i++)cout<<dif2[i]<<' ';cout<<endl;

	bool val=0;
	
	if(c==a and b==d){
		sort(dif1,dif1+n-1);
		sort(dif2,dif2+n-1);
		bool f=0;
		for(int i=0;i<n-1;i++)if(dif1[i]!=dif2[i])f=1;
		if(!f)val=1;	
	}
	
	if(val)printf("Yes\n");
	else printf("No\n");
	return 0;
}
