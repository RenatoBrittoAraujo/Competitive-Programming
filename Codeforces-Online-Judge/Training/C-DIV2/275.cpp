
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

vi per;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int pl = 1;
	int ph = n;
	bool f = 1;
	k--;
	while(k>0){
		per.pb((f?ph--:pl++));
		f=!f;
		k--;		
	}	
	if(!f)loop(i,pl,ph+1)per.pb(i);
	else for(int i=ph;i>=pl;i--)per.pb(i);
	loop(i,0,n)cout<<per[i]<<' ';cout<<endl;
	return 0;
}
