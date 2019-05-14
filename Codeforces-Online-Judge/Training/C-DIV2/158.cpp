
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

ll x,n;
ll b[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>x;
	ll m = 100000000000;
	loop(i,0,n){
		cin>>b[i];
		if(b[i]<m)m=b[i];
	}		

//	cout<<m<<' '<<max(m-1,0LL);
	
	loop(i,0,n)b[i] -= max(0LL,m-1);

//	loop(i,0,n)cout<<b[i]<<' ';cout<<endl;
	
	ll s = n*max(m-1,0LL);

	x--;
	if(x<0)x=n-1;
		
	while(b[x] > 0){
//		cout<<"WHILE ON "<<x<<endl;	
		b[x]--;
		x--;
		s++;
		if(x==-1)x=n-1;
	}

//	cout<<s<<endl;
	
	//loop(i,0,n)b[i] += max(m-1,0LL);

	b[x] = s;

	loop(i,0,n)cout<<b[i]<<' ';
	cout<<endl;
	return 0;
}
