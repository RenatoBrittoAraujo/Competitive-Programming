#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fio ios_base::sync_with_stdio(false)
#define pdl cout << "*" << endl
#define MOD 1000000007
#define INF 1000000000
#define INFLL 1000000000000000000ll
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define long int64_t
using namespace std;
using namespace __gnu_pbds;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef priority_queue<pii, vector<pii>, greater<pii>> min_pq;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OST;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
uniform_int_distribution<> dis(0, INF<<1);
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void __f(const char* name, Arg1&& arg1){ cerr << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args> void __f(const char* names, Arg1&& arg1, Args&&... args)
{ const char* comma = strchr(names + 1, ','); cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma+1, args...); }

const int M = 100;

int sz;

struct Mat
{
	int m[M][M];

	Mat()
	{
		memset(m, 0, sizeof m);
	}

	void eye()
	{
		for(int i=0; i<sz; i++)
			m[i][i] = 1;
	}

	Mat operator* (const Mat &a) const
	{
		Mat r;
		for(int i=0; i<sz; i++)
			for(int j=0; j<sz; j++)
				for(int k=0; k<sz; k++)
					r.m[i][j] = (r.m[i][j] + m[i][k] * 1ll * a.m[k][j]) % MOD;
		return r;
	}
};

int solve(long e)
{
	Mat r, a;
	r.eye();
	a.m[0][0] = a.m[0][sz-1] = 1;
	for(int i=1; i<sz; i++)
		a.m[i][i-1] = 1;
	while(e)
	{
		if(e & 1)
			r = r * a;
		a = a * a;
		e >>= 1;
	}
	return r.m[0][0];
}

int main()
{
	fio;
	long n;
	cin >> n >> sz;
	cout << solve(n) << endl;
	return 0;
}
