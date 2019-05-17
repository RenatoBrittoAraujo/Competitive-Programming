
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

char p[4][4];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	loop(i,0,4)
		loop(j,0,4)
			cin >> p[i][j];

	loop(i,0,3){
		loop(j,0,3){

			int v1 = 0, v2 = 0;
			loop(l1,i,i +2)
				loop(l2,j,j + 2){
					if(p[l1][l2] == '#')
						v1++;
					else v2++;
//					cout<<l1<<' '<<l2<<endl;
					}
//			cout<<v<<endl;
//			cout<<i<<' '<<j<<' '<<v<<endl;

			if(v1 >= 3 or v2 >= 3){
//				cout<<"ON "<<i<<' '<<j<<" with "<<v<<endl;
				cout<<"YES\n";
				return 0;
			}
		}
	}

	cout<<"NO\n";

	return 0;
}
