
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

int ar[N*3];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,s=0;
	cin>>n;
	loop(i,0,n)cin>>ar[i];
	loop(l,0,n){
		loop(r,l+1,n){
			if((r-l+1)%2!=0)continue;
			int mid = (r-l+1)/2;	
			int v1=ar[l],v2=ar[mid+1];
			loop(i,l+1,mid+1)v1=v1^ar[i];
			loop(i,mid+2,r+1)v2=v2^ar[i];
			//cout<<mid<<' '<<v1<<' ' <<v2<<endl;
			if(v1==v2)cout<<"PAIR FOUND "<<l+1<<' '<<r+1<<" VALUE = "<<v1<<endl,s++;
		}
	}
	cout<<s<<endl;
	return 0;
}
