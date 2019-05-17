
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
const int N = 5e5 + 10;

int p[N];
int s[N];

void init()
	{
	for(int i = 0; i < N; i++)
		p[i] = i, s[i] = 1;
}

int find(int u){
	if(u == p[u]) return p[u];
	else return p[u] = find(p[u]);
}

void join(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b)
		return;
	if(p[a] > p[b])
		swap(a,b);
	p[a] = b;
	s[b] += s[a];
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);
	init();
	
	int n, m;
	cin>>n>>m;
	
	loop(i,0,m)
	{
		int v;
		cin>>v;
		int l;
		loop(j,0,v)
		{
			int k;
			cin>>k;
			if(j > 0)
				join(k - 1,l - 1);
			l = k;

		}
	}

	loop(i,0,n)
		cout<<max(s[find(i)], 1)<<' ';
	cout<<endl;

	return 0;
}
