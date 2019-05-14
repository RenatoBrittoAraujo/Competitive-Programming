
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

int x,n;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>x;	
	int ans = 3;
	if(x == 1)ans = 1;
	if(x == 2)ans = 3;
	if(x == 3)ans = 5;
	else{
		while((ans*ans)/2 + 1 < x)ans+=2;
	} 
	cout<<ans<<endl;
	return 0;
}
