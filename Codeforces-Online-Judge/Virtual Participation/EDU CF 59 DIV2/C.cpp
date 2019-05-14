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

int arr[200010];
int n,k;
char c,ac='0';

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	ll ans=0;
	vector<int> a;
	for(int i=0;i<n;i++){
		scanf(" %c",&c);
		if((i>0 and c!=ac) or (i==n-1)){
			if(i==n-1&&c==ac)a.pb(arr[i]);
			else if(i==n-1)ans+=arr[i];
			sort(a.begin(),a.end());
			int t = a.size();
			for(int i=0;i<min(t,k);i++)ans+=a[t-1-i];
			if(i==n-1)break;
			a.clear();
		}
		ac=c;
		a.pb(arr[i]);
	}
	printf("%lld\n",ans);
	return 0;
}
