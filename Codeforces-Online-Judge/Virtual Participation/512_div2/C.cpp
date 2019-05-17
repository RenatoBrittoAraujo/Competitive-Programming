
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

vi a;

bool brute(int p, int sum, int st = -1)
{
//	cout<<p<<' '<<sum<<' '<<st<<endl;
	if(p == len(a))
		return sum == 0 and st != -1;
	
	bool ret = 0;
	if(st == -1)
	{
		if(p != len(a) - 1)
			ret |= brute(p + 1, 0, sum + a[p]);
		if(ret)
			return true;
		ret |= brute(p + 1, sum + a[p], -1);
	}
	else
	{
		if(a[p] + sum < st)
			ret |= brute(p + 1, sum + a[p], st);
		else if(a[p] + sum == st) 
			ret |= brute(p + 1, 0, st);
		else return false;
	}
	return ret;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	
	a.assign(n, 0);

	loop(i,0,n)
	{
		char c;
		cin>>c;
		a[i] = c - '0';
	}

	cout<<(brute(0, 0) ? "YES" : "NO")<<endl;

	return 0;
}
