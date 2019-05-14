
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
const int N = 1e3+10;

ll ar[5*N][N*5];

ll mx;

ll sum = 0;

void op(ll vi,ll vj){
	mx = 0;
	loop(i,vi,vi+2)loop(j,vj,vj+2){
		cout<<"PASSED BY "<<i<<' '<<j<<endl;
		mx = max(mx,ar[i][j]);
		sum += ar[i][j];
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	ll n,x,c;
	cin>>n;
	
	ll r = sqrt(n);	

	//cout<<r<<endl;

	loop(i,0,r)loop(j,0,r)cin>>ar[i][j];	

	while(r>2){
		
		loop(i,0,r){loop(j,0,r)cout<<ar[i][j]<<' ';cout<<endl;}

		loop(v1,0,r/2)loop(v2,0,r/2){
			
			op(v1*2,v2*2);

			//cout<<v1<<' '<<v2<<endl;
	
			ar[v1][v2] = mx;
		}
		r /= 2;	
	}

	cout<<ar[0][0]<<' '<<ar[0][1]<<'\n'<<ar[1][0]<<' ' <<ar[1][1]<<endl;

	if(r == 2)op(0,0), ar[0][0] = mx;
	
	cout<<mx<<endl;
		
	sum += ar[0][0];
			
	//if(n == 1)r = ar[0]; 
	cout<<sum<<endl;
	return 0;
}
