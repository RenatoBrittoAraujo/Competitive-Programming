
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
const int N = 1e6+10;

vi ans;

void calc(int mt, int n)
{
	if(n > 3)
	{

		int cn = n;
	
		for(int i = 0; i < (cn + 2 - 1) / 2; i++)
			ans.pb(mt),
			n--;

		calc(mt * 2, n);

	}
	else
	{
		if(n == 1)
			ans.pb(mt);
		if(n == 2)
		{
			ans.pb(mt);
			ans.pb(2 * mt);
		}
		if(n == 3)
		{
			ans.pb(mt);
			ans.pb(mt);
			ans.pb(3 * mt);
		}
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;

	calc(1, n);

	loop(i,0,len(ans))
	{
		cout<<ans[i]<<' ';
	}

	cout<<endl;

	
		 
	
	return 0;
}
