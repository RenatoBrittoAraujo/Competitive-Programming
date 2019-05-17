
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

ll prec[101];

ll pr[N];
vi prim;
ll expp[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	loop(i,2,100)
		if(!pr[i]){
			for(int j = i + i; j < N; j+=i)
				pr[j] = 1;
			prim.pb(i);	
		}
	
	
	loop(i,0,len(prim)){

		ll v = prim[i];

		while(v * prim[i] < N)
			v *= prim[i],
			expp[v] = 1;

	}
			
	int cmax = 1;
	prec[1] = 1;
	prec[2] = 2;
	int cn = 3;

	pr[1] = 1;

	while(cmax <= 11){

		int nd = 1;

		cn++;

		//cout<<cn<<endl;

		int td = cn;

		for(int i = 0; i < prim.size() and prim[i] <= cn; i++){

			while(td > 1 and td % prim[i] == 0){

				nd++;
				td /= prim[i];

			}

			if(td == 1)
				break;

		}

		if(!expp[cn])
			nd++;

		while(prec[nd] == 0){

			cmax = max(nd, cmax);
			prec[nd] = cn;
			nd--;
		
		}

	}

	int q;
	cin>>q;

	while(q--){
		int x;
		cin>>x;
		cout<<prec[x]<<endl;
	}

	return 0;
}
