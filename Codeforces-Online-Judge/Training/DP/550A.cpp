
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
	
	string s;
	cin>>s;
	
	bool t = 0;

	loop(i,1,n-1){

		if(s.substr(i, i + 2) == "AB" or s.substr(i, i + 2) == "BA"){

			if((s[i] != s[i-1] and s[i-1] != ''))

		}

	}

	cout<<(t?"YES":"NO")<<endl;

	return 0;
}
