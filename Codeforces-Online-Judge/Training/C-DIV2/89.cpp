
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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

int n,k,ans;
vi tg[10];
string s;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>k;
	cin>>s;
	
	loop(i,0,n){
		int v = s[i] - 48;
		loop(j,0,10)tg[j].pb(abs(v - j));
	}

	int tgn;
	ans = INF;

	loop(i,0,10){
		sort(allv(tg[i]));
		int cans = 0;
		loop(j,0,k)cans += tg[i][j];
		if(ans > cans){
			ans = cans;
			tgn = i;
		}
	}

	vi toch;

	int tov = 0;
	int dlt = 0;

	//cout<<"TARGET VALUE = "<<tgn<<endl;

	bool f = 0;

	while(tov < k){

		loop(i,0,n){
			int v = s[i] - 48;
			if(!f and v == tgn - dlt){
				s[i] = char(tgn + 48);
				tov++;
			}
			if(f and v == tgn + dlt){
				s[i] = char(tgn + 48);
				tov++;
			}
			if(tov >= k)break;
		}

		if(f)dlt++;

		if(dlt == 0)f = 1, dlt++;
		
		f = !f;
	}

	cout<<ans<<endl;
	cout<<s<<endl;

	return 0;
}
