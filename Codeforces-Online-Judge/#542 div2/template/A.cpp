
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
		
	int n;
	cin>>n;
	int s = 0,z = 0 ;
	int x;
	loop(i,0,n){cin>>x;if(x>0)s++;else if(x==0)z++;}
	int v = ceil(double(n)/2.0);
	int i = n-z-s;
	if(i>=v)cout<<-1<<endl;
	else if(s>=v)cout<<1<<endl;
	else cout<<0<<endl;

	return 0;
}
