
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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

int ft[N];
int n;

void upd(int p,int v){
	for(int i=p;i<=N;i+=i&-i)
		ft[i]+=v;
	cout<<"AFTER UPDATE "<<p<<" "<<v<<endl;
	loop(i,0,30)cout<<ft[i]<<' ';cout<<endl;	
}

int sm(int p){
	int ans = 0;
	for(int i=p;i;i-=i&-i)
		cout<<"VISITING "<<i<<" WITH VALUE "<<ft[i]<<endl,
		ans+=ft[i];
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,x;
	cin>>n;
	loop(i,0,n){
		cin>>x;
		upd(i+1,x);
	}

	int q;
	cin>>q;
	
	loop(i,0,q){
		do{cin>>x;}while(x<1||x>n);
		cout<<sm(x)<<endl;
	}
		
	return 0;
}
