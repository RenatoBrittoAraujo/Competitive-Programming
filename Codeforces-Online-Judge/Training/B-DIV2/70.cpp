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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;cin>>n;

	string s,p = "ROYGBIV";
	int in=0;
	int t = len(p);
	for(int i=0;i<n/7;i++)cout<<p;
	int v = n%7;
	string vec[6]={"G","GB","YGB","YGBI","OYGBI","OYGBIV"};
	if(v>0)cout<<vec[v];
	cout<<endl;
	return 0;
}
