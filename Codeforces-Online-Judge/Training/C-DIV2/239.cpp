
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
const int N = 1e5+10;

int a,b;


int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>a>>b;

	for(int x1 = 1;x1*x1 < a*a;x1++){
		for(int x2 = 1;x2*x2 < a*a;x2++){
			if(x1*x1 + x2*x2 > a*a)break;
			else if(x1*x1 + x2*x2 == a*a){
				int x = 0,y = 0;
				if((x2*b)%a or (x1*b)%a)continue;
				x = x1 - x2*b / a;
				y = x2 + x1*b / a;
				if(x!=0){
					cout<<"YES\n0 0\n";
					cout<<x1<<' '<<x2<<endl;
					cout<<x<<' '<<y<<endl;
					return 0;
				}
			}			
		}
	}
	cout<<"NO\n";
	return 0;
}
