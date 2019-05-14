
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
const int N = 2e5+10;

int r[N];
int ch[N];
ii mn[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n,m;
	cin>>n>>m;
	
	vector<int> tsor;

	deque<int> me;
	loop(i,0,n)cin>>r[i], tsor.pb(r[i]);
	
	int l, t;

	loop(i,0,m){
		cin>>t>>l;
		mn[i]  =  {t ,l - 1};
	}

	int mi = -1;

	for(int i = m - 1; i >= 0; i--){

		if(mn[i].second > mi){
			
			ch[mn[i].second] = mn[i].first;

			mi = mn[i].second;

		}

	}

	int cop = 0;

	int cnt = 0;

	for(int i = n - 1; i >= 0; i--){
		
		if(ch[i] != 0){
			if(cop == 0)cnt = n - 1 - i;
			cop = ch[i];
		}
		ch[i] = cop;

	}

	sort(tsor.begin(), tsor.end() - cnt);

	for(int i = 0; i < (int)tsor.size() - cnt; i++){

		me.push_front(tsor[i]);
	
	}

	//loop(i,0,n)cout<<ch[i]<<' ';cout<<endl;

	vector<int> ans;

	for(int i = n - 1; i >= 0; i--){
		
		if(ch[i] == 0)
			
			ans.pb(r[i]);
		
		else if(ch[i] == 2){

			//cout<<"\nON "<<i<<" max = "<<*me.rbegin()<<endl;

			ans.pb(me.back());
			me.pop_back();	

		}else{

			//cout<<"\nON "<<i<<" min = "<<*me.begin()<<endl;

			ans.pb(me.front());
			me.pop_front();

		}

	}

	reverse(allv(ans));

	for(auto v: ans)cout<<v<<' ';cout<<endl;

	return 0;
}
