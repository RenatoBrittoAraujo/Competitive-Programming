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
using vi = pair<int,int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

int arr[1001];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	loop(i,0,n)cin>>arr[i];
	int ans=0;
	loop(i,0,n){
		int l=i-1,r=i+1;
		int ar=1;
		while(l>=0 and arr[l]<=arr[l+1])ar++,l--;
		while(r<n and arr[r]<=arr[r-1])ar++,r++;
		ans=max(ans,ar);
	
	}
	cout<<ans<<endl;	

	return 0;
}
