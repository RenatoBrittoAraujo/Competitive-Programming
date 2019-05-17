
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
const int N = 2e5 + 10;

vector<int> tr[20];

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n, q;
	cin>>n>>q;

	for(int i = 0, v = (1 << n); v > 0; v >>= 1, i++)
		tr[i].assign(v, 0);
	
	loop(i,0,(1 << n))
	{
		cin>>tr[0][i];
	}

	for(int i = 1; !tr[i].empty(); i++)
	{
		for(int j = 0; j < len(tr[i - 1]); j += 2)
		{
			int calc;

			if(i & 1)
				calc = tr[i - 1][j] | tr[i - 1][j + 1];
			else
				calc = tr[i - 1][j] ^ tr[i - 1][j + 1];

			tr[i][j / 2] = calc;
		}

		//loop(j, 0, len(tr[i]))
		//	cout<<tr[i][j]<<' ';
		//cout<<endl;
	}
	
	while(q--)
	{
		int p, b;
		cin>>p>>b;
		p--;
		tr[0][p] = b;

		p -= !!(1 & p);
		int c = p / 2;

		for(int i = 1; !tr[i].empty(); i++)
		{
//			cout<<"CALC, p = "<<p<<" c = "<<c<<"\n"<<endl;
			int calc;
			
			if(i & 1)
				calc = tr[i - 1][p] | tr[i - 1][p + 1];
			else
				calc = tr[i - 1][p] ^ tr[i - 1][p + 1];

//			cout<<"FINAL ASS\n";
			tr[i][c] = calc; 
		
			c /= 2;
			p = c * 2;

			//loop(j,0,len(tr[i]))
			//	cout<<tr[i][j]<<' ';
			//cout<<endl;
			
			if(len(tr[i]) == 1)
				cout<<tr[i][0]<<endl;
		}
	}

	return 0;
}
