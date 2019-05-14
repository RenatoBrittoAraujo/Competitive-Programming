
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
const int INF = 0x3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;

int f[101], l[101], h[101][101];

int main(){

	int n,m,v;
	
	cin>>n>>m>>v;
	
	loop(i,0,m)
		cin>>f[i];

	loop(i,0,n)
		cin>>l[i];

	loop(i,0,n)
		loop(j,0,m)
			cin>>h[i][j];

	loop(i,0,n){

		loop(j,0,m){
				
			if(!h[i][j])
				continue;
			
			h[i][j] = min(l[i], f[j]);
			
		}

	}

	loop(i,0,n){
		loop(j,0,m)
			cout<<h[i][j]<<' ';
		cout<<endl;
	}

	return 0;
}
