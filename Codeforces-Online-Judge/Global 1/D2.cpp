#include <bits/stdc++.h>

using namespace std;

#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define pri(x) printf("%d\n",x)
#define prie(x) printf("%d ",x)
#define prif() printf("\n")
#define sz(x) (int)((x).size())
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define BUFF ios::sync_with_stdio(false)

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e6+10;
int n;
int v[MAX];
int pd[MAX][3][3];

int solve(int p, int a, int b) {
	if (p == n) return 0;
	if (pd[p][a][b]+1) return pd[p][a][b];
	if (v[p] < a+b) return pd[p][a][b] = -INF;
	int ret = -INF;
	ret = max(ret, (v[p]-a-b)/3+solve(p+1, b, 0));
	if (v[p]-a-b-1 >= 0)
		ret = max(ret, (v[p]-a-b-1)/3+solve(p+1, b, 1));
	if (v[p]-a-b-2 >= 0)
		ret = max(ret, (v[p]-a-b-2)/3+solve(p+1, b, 2));
	return pd[p][a][b] = ret+a;
}

int main() {
	int m; sc2(m, n);
	for (int i = 0; i < m; i++) {
		int k; sc(k);
		v[k-1]++;
	}
	memset(pd, -1, sizeof(pd));
	pri(solve(0, 0, 0));
	return 0;
}
