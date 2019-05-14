
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
const int N = 2100;

bool me[N][N], calc[N][N], va[N][N];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int n,m;

int xi, yi, cur, cul, nx, ny;

ll ans = 0;

void floodfill(int x, int y, int ul, int ur)
{
	queue<pair<ii,ii>> nxt;
	
	nxt.push({{x,y},{ul,ur}});

	while(!nxt.empty())
	{
		auto pt = nxt.front();
		nxt.pop();

		xi = pt.ff.ff;
		yi = pt.ff.ss;
		
		if(pt.ss.ff >= 0 and pt.ss.ss >= 0)
		{
			if(!va[xi][yi])
				ans++;

			va[xi][yi] = 1;
		
			cur = pt.ss.ss;
			cul = pt.ss.ff;

//			cout<<"ON "<<xi<<" "<<yi<<' '<<cur<<' '<<cul<<endl;

			for(int i = 0; i < 4; i++)
			{
				if(cur == 0 and i == 2)
					continue;
				
				if(cul == 0 and i == 3)
					continue;
				
				nx = xi + dx[i];
				ny = yi + dy[i];
				
				if(nx < 0 or nx >= n or ny < 0 or ny >= m or !me[nx][ny] or calc[nx][ny])
					continue;

				nxt.push({ {nx, ny} , {cul - (i == 3), cur - (i == 2)} });
				calc[nx][ny] = 1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);

	int r,c,x,y;
	cin>>n>>m;
	cin>>r>>c;
	cin>>x>>y;

	char ch;
	
	loop(i,0,n)
		loop(j,0,m){
			cin>>ch;
			me[i][j] = (ch == '.');
		}

	floodfill(r - 1, c - 1, x, y);

	cout<<ans<<endl;

	return 0;
}
