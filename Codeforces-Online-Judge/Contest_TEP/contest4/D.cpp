
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

ll gdc(ll a, ll b){return b == 0 ? a : gdc(b, a % b);}

bool eq(int a, double b) {
	if(fabs((double)a - b) < 10e-9) return true;
	return false;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int q;
	double a, ma;
	cin >> q;
	while(q--){
		cin >> a;
		loop(n, 3, 998244354) {
			ma = 180 * (n-2);
			ma /= n;
			ma /= (n-2);
			if(a/ma <= n-2 && a/ma >= 1 && eq(floor(a/ma), a/ma)) {
				cout << n << endl;
				break;
			}
		}
	}
	
	return 0;
}
