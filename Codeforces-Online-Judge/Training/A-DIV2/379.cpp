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
using vi = pair<int,int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;string s;cin>>n>>s;
	int a=0,b=0;
	loop(i,0,n){
		if(s[i]=='A')a++;
		else b++;
	}	
	if(a==b)cout<<"Friendship\n";
	else if(a>b)cout<<"Anton\n";
	else cout<<"Danik\n";

	return 0;
}
