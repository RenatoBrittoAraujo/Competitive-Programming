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
const int N = 105;
bool cmp(ii a, ii b){return a.ff > b.ff;}
int pts[N];
bool mat[N];
int n;
char c;

map<string,int> dpv;

int dp(string s){
	if(l==r)return pts[1];
	if(dpv.find(s))return dpv[s];
	int csc=1;
	int ans=0;
	int beg=l;
	for(int i=l;i<=r+1;i++){
		//cout<<"TAKING "<<beg<<'>'<<i<<endl;
		int v = pts[csc];
		cout<<csc<<endl;
		if(beg>l)v+=dp(l,beg-1);
		if(i<r)v+=dp(i+1,r);
		ans=max(ans,v);
		if(i>l&&i<=r&&mat[i]!=mat[i-1])csc=1,beg=i;
		else csc++;	
	}
	return str[s]=ans;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf(" %c",&c),mat[i]=c-'0';
	for(int i=1;i<=n;i++)cout<<i;cout<<endl;
	for(int i=0;i<n;i++)scanf("%d",&pts[i+1]);
	printf("%d\n",dp(0,n-1));
	return 0;
}
