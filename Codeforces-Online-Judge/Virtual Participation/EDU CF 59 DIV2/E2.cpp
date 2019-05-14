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
	cout<<s<<endl;
	int t = s.size();
	if(t==0)return 0;
	if(t==1)return pts[1];
	if(dpv[s]!=0)return dpv[s];
	int ans=0;
	int beg=0;
	int csc=1;
	for(int i=0;i<=t;i++){
		int v = pts[csc];
		if(beg==0&&i<t-1)cout<<"A\n",v+=dp(s.substr(i+1));
		else if(!(i<t-1) && beg<i)cout<<"B\n",v+=dp(s.substr(0,beg));
		else if(beg!=i&&i<t-1&&beg<i)v+=dp(s.substr(i+1)+s.substr(0,beg));
		ans=max(ans,v);
		if(i>1&&i<t&&s[i]==s[i-1])csc=1,beg=i;
		else csc++;
	}
	return dpv[s]=ans;
}

string s;

int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++)cin>>pts[i+1];
	printf("%d\n",dp(s));
	return 0;
}
