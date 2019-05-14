
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

int n,x,a,b,c;

vector<pair<ii,ii>> q;

ll bp[2*N];

ll pr(){
	
	ll ans = LINF;
	int s = len(q);
	for(int i=0;i<s;i++){
		int t = q[i].ff.ss;
		if(t==-1){
			int cl = q[i].ss.ff - q[i].ff.ff +1;
			if(cl<=x)
				ans = min(ans,1LL*q[i].ss.ss + 1LL*bp[x-cl]);
		}else if(t==1){
			int cl = q[i].ff.ff - q[i].ss.ff +1;
			bp[cl]=min(bp[cl],1LL*q[i].ss.ss*1LL);
		}
	}
	return ans;
	
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>x;
	loop(i,0,n){
		cin>>a>>b>>c;
		q.pb(make_pair(ii(a,-1),ii(b,c)));
		q.pb(make_pair(ii(b,1),ii(a,c)));
	}
	
	sort(allv(q));
	
	memset(bp,LINF,sizeof(bp));	

	ll out = pr();

	if(out>=LINF)out=-1;

	cout<<out<<endl;
	
	return 0;
}
