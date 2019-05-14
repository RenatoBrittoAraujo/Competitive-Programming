
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

vi primes;
bool prime[101];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	loop(i,2,101){
		bool f = 0;
		loop(j,2,i)if(i%j==0)f=1;
		if(!f)primes.pb(i),prime[i]=1;//,cout<<i<<" prime\n";
	}
	int n,x;
	scanf("%d",&n);
	vi pf;
	loop(i,0,n){
		scanf("%d",&x);
		loop(j,0,len(primes))
			while(x%primes[j]==0)x/=primes[j],pf.pb(primes[j]);
	}

	int t = len(pf);
	
	if(t<=n){
		int sum = 0;
		sum += n - t;
		loop(i,0,t){
			sum+=pf[i];
		}
		printf("%d\n",sum);
	}else{
		while(t>n){
			sort(allv(pf));
			int v1 = pf[0];
			int v2 = pf[1];
			pf.erase(pf.begin());
			pf.erase(pf.begin());
			pf.pb(v1*v2);t--;
		}	
		int sum = 0;
		loop(i,0,t)sum+=pf[i];//,cout<<pf[i]<<' ';cout<<endl;
		printf("%d\n",sum);
	}
	return 0;
}
