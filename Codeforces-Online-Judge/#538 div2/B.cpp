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
const ll N = 200010;

int ar[N];
int n,k,m;

ll be(int l,int r){
	vector<int> a;
	ll sum=0;
	for(int i=l;i<=r;i++)a.pb(ar[i]);
	sort(a.begin(),a.end());
	for(int i=0;i<m;i++)sum+=a[n-1-i];
	cout<<"BE "<<l<<' '<<r<<' '<<sum<<endl;
	return sum;
}



ll dp(int p,int lv){
	if(p==n and p-lv>=m)return be(lv,p-1);
	else if(p==n)return -100000000;
	ll ans=dp(p+1,lv);
	if(p-lv>=m)ans=max(ans,((p<n-1)?dp(p+1,p+1):0)+be(lv,p-1));
	return ans;
}

int main(){
	scanf("%d%d%d",&n,&m,&k);
	//memset(dpv,int(-1e17),sizeof dpv);
	for(int i=0;i<n;i++)scanf("%d",ar+i);
	printf("%lld\n",dp(0,0));
	return 0;
}
