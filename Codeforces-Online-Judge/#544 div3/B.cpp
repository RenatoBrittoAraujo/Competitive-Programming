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

int n,k;

int a[2*N];
int fr[101];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	cin>>n>>k;
	int x;
	loop(i,0,n)cin>>x,fr[x%k]++;
	//loop(i,0,k)cout<<fr[i]<<' ';cout<<endl;	
	int sum = fr[0] / 2;
	if(k%2==0)sum += fr[k/2] / 2;
	for(int i = 1;i<k/2 + (k%2==1?1:0);i++){
		sum += min(fr[i],fr[k-i]);
	}
	
	cout<<2*sum<<endl;	

	return 0;
}
