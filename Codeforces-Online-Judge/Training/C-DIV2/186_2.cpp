
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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;ll s;vi a;
	scanf("%d",&n);
	a.resize(n);
	loop(i,0,n)scanf("%d",&a[i]);	
	sort(a.rbegin(),a.rend());
	//loop(i,0,n)cout<<a[i]<<' ';cout<<endl;
	s = 0;
	for(int m = 1;m<=n;m*=4){
		s += accumulate(a.begin(),a.begin()+m,0LL);
		//cout<<s<<endl;
	}
	cout<<s<<endl;
	return 0;
}
