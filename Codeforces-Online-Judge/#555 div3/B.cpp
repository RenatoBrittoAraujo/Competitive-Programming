
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

map<char, char> mp;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;

	string s;
	cin>>s;

	loop(i,0,9){

		char c;
		cin>>c;

		mp[char('1' + i)] = c;
		
	}

//	int i = 0;

	bool f = 0;

	loop(i,0,n){

		if(s[i] < mp[s[i]])
			f = 1;

		if(s[i] > mp[s[i]] and f)
			break;

		if(f)
			s[i] = mp[s[i]];


	}

	cout<<s<<endl;

	return 0;
}
