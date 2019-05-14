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
#define INF 0x3f3f3f3f
int n,m;

int arr[1000010];
int dv[1000010][3][3];

int dp(int p,int a,int b){
	if(p==m)return 0;
	if(dv[p][a][b]!=-1)return dv[p][a][b];
	int ans = -INF;
	if(arr[p]<a+b)return dv[p][a][b]=ans;
	int s = arr[p]-a-b;
	ans = max(ans, s/3 + dp(p+1,b,0));
	if(s-1>-1)ans=max(ans,(s-1)/3+dp(p+1,b,1));	
	if(s-2>-1)ans=max(ans,(s-2)/3+dp(p+1,b,2));
	return dv[p][a][b]=ans+a;
}

int main(){
	int x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&x),arr[x-1]++;
	memset(dv,-1,sizeof dv);
	printf("%d\n",dp(0,0,0));
	return 0;
}
