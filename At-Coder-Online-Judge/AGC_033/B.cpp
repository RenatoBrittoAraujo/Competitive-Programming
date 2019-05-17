
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define loop(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define len(a) (int)a.size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;



int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);

	int h,w,n;
	cin>>h>>w>>n;
	
	int x, y;
	cin>>y>>x;
	
	string s, t;
	cin>>s>>t;
	
	bool val = 0;

	map<char, int> mp;
	mp['L'] = 0;
	mp['R'] = 1;
	mp['U'] = 2;
	mp['D'] = 3;

	int da[4] = {w - x, x - 1, h - y, y - 1};

	loop(i,0,n)
	{
		da[mp[s[i]]]++;

		if(da[0] >= w)
			val = 1;
		if(da[1] >= w)
			val = 1;
		if(da[2] >= h)
			val = 1;
		if(da[3] >= h)
			val = 1;

		int v = mp[t[i]];
		if(v & 1)
			v--;
		else v++;
		
//		loop(j,0,4)
//			cout<<da[j]<<' ';
//		cout<<endl;
		
		da[v] = max(da[v] - 1, 0);

//		if(val)
//			cout<<"VALID ON "<<i<<endl;
	}		
	cout<<(val ? "NO" : "YES")<<endl;

	return 0;
}
