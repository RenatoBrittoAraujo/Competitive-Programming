
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

	vi se = {4,8,15,16,23,42};

	map<int,pair<int, int>> qv;
	
	loop(i,0,len(se))
		loop(j,i + 1,len(se))
		{
			qv[(se[i] * se[j])] = {se[i], se[j]};
//			cout<<se[i] * se[j]<<" = "<<se[i]<<' '<<se[j]<<endl;
		}

	vi ar[6];
	
	loop(i,0,3)
	{
		cout<<"? "<<i + 1<<' '<<i + 2<<endl;
		cout.flush();
		int ans;
		cin>>ans;
		if(ans == 0)
			return 0;
		ar[i].pb(qv[ans].ff);
		ar[i].pb(qv[ans].ss);
		i++;
		ar[i].pb(qv[ans].ff);
		ar[i].pb(qv[ans].ss);
	}

	cout<<"? 2 3"<<endl;
	cout.flush();

	int x;
	cin>>x;

	auto ans = qv[x];

	if(ar[1][0] == ans.ff or ar[1][1] == ans.ff)
		ar[1] = {ans.ff}, ar[2] = {ans.ss};
	else
		ar[1] = {ans.ss}, ar[2] = {ans.ff};

	ar[0] = {(ar[1][0] == ar[0][0] ? ar[0][1] : ar[0][0])};
	ar[3] = {(ar[2][0] == ar[3][0] ? ar[3][1] : ar[3][0])};

	cout<<"? 4 5"<<endl;
	cout.flush();

	cin>>x;

	ans =  qv[x];

	ar[4].pb((ar[3][0] == ans.ff) ? ans.ss : ans.ff);

	bool m[6] ={0,0,0,0,0,0};

	loop(i,0,6)
		loop(j,0,5)
			if(se[i] == ar[j][0])
				m[i] = 1;
	
	loop(i,0,6)
		if(!m[i])
			ar[5].pb(se[i]);
	cout<<"! ";
	loop(i,0,6)
		cout<<ar[i][0]<<' ';
	cout<<endl;
	fflush(stdout);

	return 0;
}
