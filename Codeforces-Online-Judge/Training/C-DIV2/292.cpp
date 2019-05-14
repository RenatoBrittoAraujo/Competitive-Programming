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

ll fact[10];

vi pf[]={{},{},{},{},{3,2,2},{},{5,3},{},{7,2,2,2},{7,3,3,2}};

int main(){
	fact[0]=1;
	for(int i=1;i<10;i++)fact[i]=fact[i-1]*i;
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	string s;
	cin>>n>>s;
	vi ve;
	loop(i,0,n){
		int v = s[i]-48;
		if(v>1){
			if(!len(pf[v]))ve.pb(v);
			else for(auto va: pf[v])ve.pb(va);
		}
	}
	sort(allv(ve),greater<int>());
	loop(i,0,len(ve))cout<<ve[i];
	cout<<endl;	
	return 0;
}
