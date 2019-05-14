
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

int n;

vector<pair<int,string>> q,f;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	string s;
	int a;	
	cin>>n;	

	loop(i,0,n){
		cin>>s>>a;
		q.eb(a,s);
	}
	
	sort(allv(q));	
			
	loop(i,0,n){
		if(q[i].ff > i){cout<<-1<<endl;return 0;}
		int h = n-i;	
		f.insert(f.begin() + q[i].ff, mp(h,q[i].ss));
	}
	
	loop(i,0,n){
		cout<<f[i].ss<<' '<<f[i].ff<<endl;
	}

	return 0;
}
