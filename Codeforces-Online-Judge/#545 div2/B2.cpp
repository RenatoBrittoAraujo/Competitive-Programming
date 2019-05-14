
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
const int N = 1e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	string s1,s2;
	
	vi p1,p2,p3,p4;

	cin>>n>>s1>>s2;
	
	loop(i,0,n){
		s1[i] -= '0';
		s2[i] -= '0';
		if(s1[i] and s2[i])p1.pb(i);
		if(s1[i] and !s2[i])p2.pb(i);
		if(!s1[i] and s2[i])p3.pb(i);
		if(!s1[i] and !s2[i])p4.pb(i);
	}

	bool f = 0;
	int v1,v2,v3,v4;
	
	for(int i = 0;!f and i <= len(p1);i++){
		for(int j = 0;!f and j <= len(p2);j++){
			//cout<<i<<' '<<j<<endl;
			int c1 = i + j;
			int a2 = len(p1) - i;
			if(a2 > c1)continue;
			int p3to2 = abs(c1 - a2);
			if(p3to2 > len(p3))continue;
			a2 += p3to2;
			if(c1 != a2)continue;
			int t2 = a2 + len(p2) - j;
			int t1 = c1 + len(p3) - p3to2;
			if(abs(t1-t2) > len(p4))continue;
			int nt1 = max(0,t2-t1);
			int nt2 = max(0,t1-t2);
			int rem = len(p4) - nt1 - nt2;
			if(rem%2!=0)continue;
			nt1 += rem/2;
			nt2 += rem/2;
			t1 += nt1;
			t2 += nt2;
			//cout<<t1<<' '<<t2<<' '<<c1<<' '<<a2<<endl;
			if(t1 == t2 and t2 == n/2){
				v1 = i;
				v2 = j;
				v3 = len(p3) - p3to2;
				v4 = nt1;
				f = 1;
				break;
			}
		}
	}

	if(!f)cout<<-1<<endl;
	else{
		vi ans;
		//cout<<v1<<' '<<v2<<' '<<v3<<' '<<v4<<endl;
		loop(i,0,v1)ans.pb(p1[i]);
		loop(i,0,v2)ans.pb(p2[i]);
		loop(i,0,v3)ans.pb(p3[i]);
		loop(i,0,v4)ans.pb(p4[i]);
		loop(i,0,len(ans))cout<<ans[i]+1<<' ';
		cout<<endl;
	}

	return 0;
}
