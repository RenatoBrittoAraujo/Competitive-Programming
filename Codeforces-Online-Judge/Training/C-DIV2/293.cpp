
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

int a[N],pos[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	loop(i,0,n)cin>>a[i],pos[a[i]]=i;
	ll sum = 0;int x;
	loop(i,0,m){
		cin>>x;
		sum+= (pos[x])/k + 1;
		if(pos[x]!=0){
			int p = pos[x];
			pos[x]--;
			pos[a[p-1]]++;
			swap(a[p],a[p-1]);	
		}
		//loop(i,0,n)cout<<a[i]<<' ';cout<<endl;
	}	
	cout<<sum<<endl;
	return 0;
}
