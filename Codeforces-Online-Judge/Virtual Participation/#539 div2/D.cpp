
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

string s;

bool ispalindrome(int l,int r){
	loop(i,l,(r-l+1)/2)if(s[l+i]!=s[r-i])return 0;
	return 1;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>s;
	int su = 1;
	int p = len(s);
	bool f = 0;
	loop(i,1,p/2)if(s[i]!=s[i-1]){f=1;break;}
	if(p==3 and s[0]!=s[2])f=1;
	if(p==2 and s[0]!=s[1])f=1;
	if(!f){cout<<"Impossible\n";return 0;}
	while(p>1 and ispalindrome(0,p-1)){
		su+=p%2;
		p/=2;
	}
	su=min(su,2);
	cout<<su<<endl;
	return 0;
}
