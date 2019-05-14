
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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n, m;
	cin>>n>>m;
	
	bool val = false;

	vector<ii> seg;
	set<int> con[N];

	loop(i,0,m){
		int a,b;
		cin>>a>>b;
		seg.eb(a - 1, b - 1);
		con[a - 1].insert(b - 1);
		con[b - 1].insert(a - 1);
	}

	loop(i,1,n){
	
		if((n % i) != 0)
			continue;

		//cout<<"Testing "<<i<<endl;

		bool cval = true;
	
		loop(j,0,m){

			int v1 = (seg[j].ff + i) % n;
			int v2 = (seg[j].ss + i) % n;

			cval &= con[v1].count(v2) and con[v2].count(v1);
			
			if(!cval){
				//cout<<"Failed at "<<v1<<' '<<v2<<endl;
				break;			
			}
		}

		if(cval){
			val = true;
			break;
		}
		
	}	

	cout<<(val?"Yes":"No")<<endl;

	return 0;
}
