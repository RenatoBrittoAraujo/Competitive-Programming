
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

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;

	int op;
	ll x,y;

	int ss = 0;

	ll sum = 0;
	ll vlast = 0;

	loop(i,0,n){

		cin>>op;

		if(op == 1){

			cin>>y>>x;
			sum += y * x;
			
			if(x == ss){
				vlast += x;
			}

		}if(op == 2){
			
			cin>>x;
			sum += x;
			vlast = x;
			ss++;
		
		}else{
		
			ss--;
			sum -= vlast;
		
		}
	}

	return 0;
}
