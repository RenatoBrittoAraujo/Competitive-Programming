
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

ll fv[1000];

ll fib(int n){
	if(n==1)return 1;
	if(n==2)return 2;
	if(fv[n]!=0)return fv[n];
	else return fv[n] = fib(n-1) + fib(n-2);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n;
	cin>>n;
	int s = 1;
	while(fib(s+1)<=n)s++;
	cout<<s-1<<endl;

	return 0;
}
