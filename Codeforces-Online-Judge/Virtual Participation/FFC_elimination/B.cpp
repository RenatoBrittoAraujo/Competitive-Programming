
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

	string t, sl;
	cin>>t;
	
	bool val = true;
	
	loop(i,0,len(t))
		if(t[i] != 'a')
			sl += t[i];

	val = !(len(sl) & 1);
	
	for(int i = 0, j = len(sl) / 2; i < len(sl) / 2 and j < len(sl); i++, j++)
	{
		if(sl[i] != sl[j])
			val = false;
	}

	for(int i = len(t) - len(sl) / 2; i < len(t); i++)
	{
		if(t[i] == 'a')
			val = false;
	}

	string s;

	if(val)
	{
		for(int i = 0; i < len(t) - len(sl) / 2; i++)
		{
			s += t[i];
		}
	}
	
	cout<<(val? s : ":(")<<endl;	
	
	return 0;
}
