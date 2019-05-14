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
const int N = 1e7+10;

int fr[N], pref[N];
bool pr[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,x;
	cin>>n;
	
	loop(i,0,n){
		cin>>x;
		fr[x]++;
	}

	loop(i,2,N){
		pref[i] = pref[i-1];
		
		if(pr[i])continue;
		
		for(int j = i; j < N; j+=i)
			pref[i] += fr[j],
			pr[j] = 1;
	}

	int m,l,r;
	cin>>m;

	while(m--){

		cin>>l>>r;
		r = min(r, N - 10);
		l = min(r, l);

		cout<<pref[r] - pref[l-1]<<endl;
	
	}

	return 0;
}
