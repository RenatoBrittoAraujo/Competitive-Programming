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
	
	int n,m;
	cin>>n>>m;	
	vi la;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		la.pb(x);
	}	
	sort(allv(la));
	double md=0;
	for(int i=1;i<n;i++)
		md=max(md,double(la[i]-la[i-1])/2.0);
	//cout<<md<<endl;
	if(la[0]!=0)md=max(md,(double)la[0]);
	if(la[n-1]!=m)md=max(md,(double)(m-la[n-1]));
	printf("%.9f\n",md);
	return 0;
}
