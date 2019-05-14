
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

	int a[3];

	loop(i,0,3)
		cin>>a[i];

	int d = 0;

	int c[7] = {0,1,2,0,2,1,0};

	loop(i,0,7){
		
		int	cd = 0;

		int b[3] = {a[0], a[1], a[2]};

		loop(k,i,7){
			if(!b[c[k]])
				break;
			b[c[k]]--, cd++;
		}

		int m = min(b[0] / 3, min(b[1] / 2, b[2] / 2));

		loop(k,0,3)
			b[k] -= m * (k == 0 ? 3 : 2);

		cd += m * 7;

		int k = 0;

		//cout<<m<<endl;

		while(b[c[k]]){
			b[c[k]]--;
			cd++;
			k = (k + 1) % 7;
		}
		
		d = max(cd , d);	

	}

	cout<<d<<endl;
	
	return 0;
}
