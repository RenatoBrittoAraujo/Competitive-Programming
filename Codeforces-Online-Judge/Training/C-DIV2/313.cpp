
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
	
	ll v[6];
	ll sum = 0;
	loop(i,0,6)cin>>v[i];
	sum+=(v[0]+v[1]+v[2]);
	sum*=sum;
	sum-=v[0]*v[0];
	sum-=v[2]*v[2];
	sum-=v[4]*v[4];
	cout<<sum<<endl;

	return 0;
}
