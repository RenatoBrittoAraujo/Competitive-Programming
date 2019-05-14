
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
	
	int n;
	cin>>n;
	int ans = INF;
	int indx = -1;
	loop(i,1,n+1){
		int x;
		cin>>x;
		int op = (max((x - i + 1), 0) + n - 1) / n;
		if(op < ans){
			ans = op;
			indx = i;
		}
	}
	
	cout<<indx<<endl;
	
	return 0;
}
