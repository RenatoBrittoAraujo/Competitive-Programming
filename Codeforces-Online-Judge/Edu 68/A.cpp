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

int ar[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	cin>>n;
	int mxn = 0;
	loop(i,0,n)cin>>ar[i],mxn = max(mxn,ar[i]);
	int s = 1;
	int cs = 0;
	loop(i,0,n){
		if(ar[i]==mxn)cs++;
		else cs=0;
		s = max(s,cs);
	}
	cout<<s<<endl;
	
	return 0;
}
