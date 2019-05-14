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
	
	ll a,b;
	cin>>a>>b;
	ll tdv = b/a;

	if(b % a){
		cout<<-1<<endl;
		return 0;
	}
	
	int cnt = 0;

	while(tdv >= 2){
	
		if(tdv%2==0)tdv/=2;
		else if(tdv%3==0)tdv/=3;
		else break;

		cnt++;
	}

	if(tdv != 1)cout<<-1<<endl;
	else cout<<cnt<<endl;

	return 0;
}
