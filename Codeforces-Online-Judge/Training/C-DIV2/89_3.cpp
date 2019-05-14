
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

int v;

struct stp{

	int id;
	int x;

	bool operator < (const stp &o) const{
		
		if(abs(o.x - v) != abs(x - v))return abs(x - v) < abs(o.x - v);
		if(x != o.x)return x > o.x;
		if(x < v)return id > o.id;
		else return id < o.id;

	}

}ch[N];

string s, t;
int n,m;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>m>>s;
	
	loop(i,0,n){
		ch[i].id = i;
		ch[i].x = s[i] - 48;
	}	

 	int ans = INF;

	for(v = 0; v < 10; v++){
		sort(ch, ch + n);
		string a(s);
		
		int res = 0;

		loop(i,0,m){
			res += abs(ch[i].x - v);
			a[ch[i].id] = v + 48;
		}

		if(res < ans){
			t = a;
			ans = res;
		}else if(res == ans and t > a){
			t = a;
		}

	}

	cout<<ans<<endl<<t<<endl;

	return 0;
}
