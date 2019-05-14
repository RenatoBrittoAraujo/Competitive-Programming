
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

ii bc[N];
int n;

bool cmp(ii a,ii b){
	if(a.ff != b.ff) return a.ff >= b.ff;
	else return a.ss <= b.ss;
}

int st[N];

set<int> pt;

int dp(int p){
	//cout<<"DP "<<p<<endl;
	pt.insert(p);
	if(p==n-1)return 1;
	if(p==n)return 0;
	if(st[p]!=0)return st[p];
	int d = bc[p].ff;
	d -= bc[p].ss;
	int i = p+1;
	while(i<n and bc[i].ff >= d)i++;
	if(i<n)return st[p] = 1 + dp(i);
	else return 1;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;int a,b;
	loop(i,0,n){
		cin>>a>>b;
		bc[i]={a,b};
	}
	st[n-1]=1;		
	sort(bc,bc+n,cmp);
	int mi = -1;
	dp(0);
	loop(i,0,n)if(pt.find(i)==pt.end())dp(i);
	loop(i,0,n)mi=max(mi,st[i]);
	cout<<n-mi<<endl;
	return 0;
}
