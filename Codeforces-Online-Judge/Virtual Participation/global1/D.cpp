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

int n,m;

int arr[1000010];

int dp(int i,int t1,int t2){
	if(i+3>m)return 0;
	int ans = t1;
	int t3 = min(arr[i+1],min(arr[i+2],arr[i+3]));
	ans+=dp(i+1,t2,t3);
	if(arr[i+1]-t3>2)ans+=(arr[i+1]-t3)/3;
	return ans;
}

int main(){
	int x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&x),arr[x]++;
	printf("%d\n",dp(1,0,min(arr[1],min(arr[2],arr[3]))));
	return 0;
}
