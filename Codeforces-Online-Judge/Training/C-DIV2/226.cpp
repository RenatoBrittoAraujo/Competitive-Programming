
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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
const int N = 1e6+10;

int n,m;
bool isp[N*10];
vector<int> prime;
ll pref[7*N];
int nmap[(int)1e7+10];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	//cout<<"Calculating primes...\n";

	for(int i = 2; i <= 1e7; i++){
		if(!isp[i]){
			for(int j = i + i; j <= 1e7; j+=i)
				isp[j] = 1;
			prime.pb(i);
		}
	}

	//cout<<"First 10: ";
	//for(int i = 0; i < 10; i++)cout<<prime[i]<<' ';cout<<endl;

	//cout<<"Primes calculated, "<<prime.size()<<" prime numbers up to 1e7\n";

	cin>>n;
	int x;
	loop(i,0,n)
		cin>>x,
		nmap[x]++;

	//cout<<"Input read\n";

	int indx = 1;
	ll cnt = 0;
	for(int pr: prime){
		ll val = pr;		
		while(val <= 1e7){
			cnt += nmap[val];
			val += pr;
		}
		
		pref[indx++] = cnt;
	}

	//cout<<"Distribution complete\n";

	cin>>m;
	while(m--){

		int l,r;
		cin>>l>>r;

		int p1 = lower_bound(allv(prime), l) - prime.begin();
		int p2 = lower_bound(allv(prime), r) - prime.begin();	

		if(p1 > p2){
			cout<<0<<endl;
			return 0;
		}

		cout<<pref[p2] - pref[p1]<<endl;		

	}
	return 0;
}
