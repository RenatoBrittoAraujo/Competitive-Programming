
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

int n, k;

int prefa[N];
int prefb[N];

int tp(int * a){

	int j = 0;

	int ans = 0;

	loop(i, 1, n + 1){

		while(a[i] - a[j] > k)
			j++;

		ans = max(ans, i - j);	

	}

	return ans;

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n;

	cin>>k;

	string s;
	cin>>s;

	loop(i,0,n)
		prefa[i + 1] = prefa[i] + (s[i] == 'a'),
		prefb[i + 1] = prefb[i] + (s[i] == 'b');
	
	int ans = 0;
	
	ans = max(ans, tp(prefa));
	ans = max(ans, tp(prefb));

	cout<<ans<<endl;

	return 0;
}
