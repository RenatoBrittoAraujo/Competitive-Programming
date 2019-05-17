
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
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vi a(n);
		loop(i,0,n)
			cin>>a[i];

		sort(allv(a));

		int cnt = 1;
		int last = a[0];

		int k = -1;

		loop(i,1,len(a))
		{
			if(a[i] == last)
				cnt++;
			
			else
				cnt = 1, last = a[i];
			if(cnt == 4)
			{
				k = i;
				break;
			}
				
		}

		if(k != -1)
		{
//			cout<<"OK\n";
			loop(i,0,4)
				cout<<a[k]<<' ';
			cout<<endl;
			continue;
		}

		int i = 0;

		vi st;

		loop(i,0,n - 1)
		{
			if(a[i] == a[i + 1] and (st.empty() or st.back() != a[i]))
				st.pb(a[i]);
		}

		if(st.size() == 1)
			st.pb(st[0]);

		sort(allv(st));

		k = 0;
		double dif = 1e18;

		loop(i,0,len(st) - 1)
		{
			double cdif = (double)st[i + 1] / (double)st[i] + 
						  (double)st[i] / (double)st[i + 1];

			if(cdif - dif < err)
			{
				dif = cdif;
				k = i;
			}
		}

		cout<<st[k]<<' '<<st[k]<<' '<<st[k + 1]<<' '<<st[k + 1]<<endl;
	}

	return 0;
}
