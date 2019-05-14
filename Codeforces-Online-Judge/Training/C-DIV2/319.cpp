
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

bool pot[int(1e3+10)];
bool pr[int(1e3+10)];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(pr[i]){continue;}
		else for(int j=i+i;j<=n;j+=i)pr[j]=1;
	}
	for(int i=2;i<=sqrt(n)+1;i++){
		if(!pr[i]){
			for(int j=i*i;j<=n;j*=i)pot[j]=1;
		}
	}
	vi num;
	loop(i,2,n+1)if(pot[i] or !pr[i])num.pb(i);
	cout<<len(num)<<endl;
	loop(i,0,len(num))cout<<num[i]<<' ';cout<<endl;
	return 0;
}
