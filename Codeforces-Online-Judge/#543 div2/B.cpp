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

vector<ii> freq;
int fr[2*N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,x;
	cin>>n;
	int sw[1001];
	loop(i,0,n)cin>>sw[i];
	loop(i,0,n){
		loop(j,i+1,n){
			fr[sw[i]+sw[j]]++;
		}
	}
	int mx = 0;
	loop(i,0,2*N){
		mx = max(mx,fr[i]);
	}
	cout<<mx<<endl;
	return 0;
}
