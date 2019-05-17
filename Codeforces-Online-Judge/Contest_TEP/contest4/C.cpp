
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

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	double n, a;
	vector<double> angs;

	cin >> n >> a;

	double max_ang = 180 - (360 / n);
	double num_ang = n - 2;

	int ans = -1;
	double best = 10e9;
	loop(i, 1, num_ang+1) {
		double ang = (max_ang/num_ang) * i;
		angs.push_back(ang);
		if(fabs(ang - a) < best) {
			best = fabs(a - ang);
			ans = i;
		}
	}

	cout << "2 1 " << ans + 2 << endl;	

	return 0;
}
