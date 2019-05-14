
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

int b[101];
int a[101];

ll gdc(ll a, ll b){return (b==0)?a:gdc(b,a%b);}
ll llc(ll a, ll b){return a*(b/gdc(a,b));}

bool c[101];

int cnt[101];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
		
	loop(i,1,n+1)
		cin>>a[i],
		b[a[i]]++;

	loop(i,1,n+1){
		if(!b[i]){
			cout<<-1<<endl;
			return 0;
		}
	}

	int tp = 0;

	loop(i,1,n+1){
		if(c[i])continue;
		c[i] = 1;
		cnt[++tp] = 1;
		for(int j = a[i]; j!=i; j = a[j]){
			cnt[tp]++;
			c[j]=1;
		}
	}

	loop(i,1,tp+1){
		
		if(!(cnt[i] & 1))cnt[i]>>=1;

	}

	ll ans = cnt[1];
	
	loop(i,2,tp+1){
		ans = ans * cnt[i] / gdc(ans, cnt[i]);
	}

	cout<<ans<<endl;

	return 0;
}
