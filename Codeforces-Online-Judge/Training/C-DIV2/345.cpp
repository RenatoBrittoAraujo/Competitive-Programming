
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

map<int,int> px;
map<int,int> py;
map<ii,int> v;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	int x,y;
	vector<ii> pt;
	ll sum=0;
	cin>>n;
	loop(i,0,n){
		cin>>x>>y;
		sum-=v[ii(x,y)];
		v[ii(x,y)]++;
		sum+=px[x];
		sum+=py[y];
		px[x]++;py[y]++;
		//cout<<sum<<endl;	
	} 	
	cout<<sum<<endl;

	return 0;
}
