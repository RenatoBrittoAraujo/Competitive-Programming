
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
const int N = 2e5+10;

int a[N], b[N], c[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;

	loop(i,0,n)
		cin>>a[i];

	int x;

	loop(i,0,n)
		cin>>x,
		b[x]++;

	int vz[N];

	x = 0;
	
	bool f = 0;

	int st = 0;

	int i = 0;

	while(true){

		if(i == st and f)
			break;


		if(b[i])
			st = i,
			f = 1;

		if(f){
			if(b[i])
				vz[i] = 0;
			else
				vz[i] = vz[(i - 1 < 0 ? n - 1 : i - 1)] + 1;
		}

		i++;
		i %= n;
			

	}

	loop(i,0,n){

		int v = 0;

		while(!b[v]){
		
			v += vz[v];
			v %= n;

		}

		b[n - a[i] + v]--;

		c[i] = v;

	}

	loop(i,0,n)cout<<c[i]<<' ';
	cout<<endl;

	
	return 0;
}
