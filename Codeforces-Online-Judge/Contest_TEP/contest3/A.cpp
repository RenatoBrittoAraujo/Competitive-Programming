
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

	int a[4];
	
	loop(i,0,4)
		cin>>a[i];
		
	sort(a, a + 4);
	
	if(a[0] + a[1] > a[2] or a[1] + a[2] > a[3])
		cout<<"TRIANGLE\n";
	else if(a[0] + a[1] == a[2] or a[1] + a[2] == a[3])
		cout<<"SEGMENT\n";
	else cout<<"IMPOSSIBLE\n";	

	return 0;
}
