
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

map<int,bool> mp;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	
	int k = 1;
	
	while(((k * (k + 1)) / 2) <= 1e9){
		//cout<<(k * (k + 1)) / 2<<endl;
		mp[(k * (k+1)) / 2] = 1;
		k++;
	}

	vector<int> x;
	for(auto i = mp.begin(); i != mp.end(); i++)x.pb(i->ff);
	
	for(int v: x){
		//cout<<v<<endl;
		if(v > n)break;
		if(mp[n-v]){
			cout<<"YES\n";
			return 0;
		}
	}

	cout<<"NO\n";

	return 0;
}
