
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
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;

int fr[51];

int main(){

	int n;
	cin>>n;
	
	int x;

	loop(i,0,n){	
		cin>>x;
		fr[x]++;
	}

	bool vic;

	loop(i,0,51)
		if(fr[i]){
			vic = fr[i] <= n / 2;
			break;
		}
	
	cout<<(vic?"Alice":"Bob")<<endl;	

	return 0;
}
