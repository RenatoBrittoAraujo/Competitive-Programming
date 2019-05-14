
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
const int N = 1e5+10;

char p[1001][1001];
char r[1001][1001];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n,m;

	cin>>n>>m;
		
	loop(i,0,n)
		loop(j,0,m)
			cin>>p[i][j],
			r[i][j] = '.';

	loop(i,0,n - 2)
	{
		loop(j,0,m - 2)
		{
			bool ok = true;

			loop(ik,0,3)
			{
				loop(jk,0,3)
				{
					if(ik == 1 and jk == 1)
						continue;

//					cout<<"ITER ON "<<ik + i<<' '<<jk + j<<endl;

					if(p[ik + i][jk + j] != '#')
						ok = false;
				}
			}

			if(ok)
			{
				loop(ik,0,3)
				{
					loop(jk,0,3)
					{
						if(!(ik == 1 and jk == 1))
							r[i + ik][j + jk] = '#';
					}
				}
			}

		}
	}

	bool val = true;

	loop(i,0,n)
		loop(j,0,m)
			if(p[i][j] != r[i][j])
				val = false;

	cout<<(val?"YES":"NO")<<endl;

	return 0;
}
