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

ll n,v1,v2;
ll ls[129];

ll gdc(ll a,ll b){return b==0?a:gdc(b,a%b);}

int main(){
	scanf("%lld",&n);
	for(int i=0;i<n;i++)scanf("%lld",&ls[i]);
	v1=*max_element(ls,ls+n);
	set<int> af;
	vector<int> fa;
	for(int i=0;i<n;i++){
		if(gdc(v1,ls[i])==ls[i]){
			if(af.find(ls[i])==af.end())af.insert(ls[i]),ls[i]=-1;
		}
		if(ls[i]!=-1)fa.pb(ls[i]);
	}
	if(fa.size()>0)v2 = *max_element(fa.begin(),fa.end());
	else v2=1;
	printf("%lld %lld\n",v1,v2);
	return 0;
}
