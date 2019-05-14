
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
		
	int n,v;
	cin>>n>>v;
	int c = min(v,n-1);
	int p = 2;
	int t = c-1; 
	while(p<n){
		//cout<<p<<' '<<c<<' '<<t<<endl;
		if(n-p+1>v)/*cout<<"BOUGHT "<<v-t<<'\n',*/c+=p*(v-t),t=v;
		p++;t--;
	}
	cout<<c<<endl;
	return 0;
}
