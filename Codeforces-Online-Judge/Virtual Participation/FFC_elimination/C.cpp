
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

		if(n == 2)
		{
			cout<<" 1 1 1 2"<<endl;
			cout.flush();
			int ans;
			cin>>ans;
			cout<<"-1 "<<ans<<endl;
			continue;
		}

		vector<int> can(n - 1);

		for(int i = 0; i < n - 1; i++)
			can[i] = i + 2;
	
		int l = 0, r = n - 2;

		while(r - l > 0)
		{
			int mid = (l + r) / 2;

			int v1, v2;

			cout<<"1 "<<mid - l + 1<<" 1 ";
			for(int i = l; i <= mid; i++)
				cout<<can[i]<<' ';
			cout<<endl;
			cout.flush();
			
			cin>>v1;
			
			cout<<"1 "<<r - mid<<" 1 "; 
			for(int i = mid + 1; i <= r; i++)
				cout<<can[i]<<' ';
			cout<<endl;
			cout.flush();

			cin>>v2;

			if(v1 > v2)
				r = mid;
			else
				l = mid + 1;
		}

		//cout<<"YO\n";

		int lb = l > (n - 1) / 2 ? 0 : (n - 1) / 2 + 1;
		int rb = l > (n - 1) / 2 ? (n - 1) / 2 : n - 2;

		cout<<"1 "<< rb - lb + 1 <<' '<<can[l]<<' ';

		for(int i = lb; i <= rb; i++) 
			cout<<can[i]<<' ';
		
		cout.flush();

		int ans;
		cin>>ans;
		cout<<"-1 "<<ans<<endl;
		
	}

	return 0;
}
