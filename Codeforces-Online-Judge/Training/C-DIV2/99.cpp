
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

ll n,k;

bool isVowel(char c){return c=='a' or c=='e' or c=='i' or c=='o' or c=='u';}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>k;

	int types[N];
	map<string, int> mp;
	mp["aaaa"] = 1;
	mp["aabb"] = 2;
	mp["abab"] = 3;
	mp["abba"] = 4;

	loop(i,0,n){
		vector<string> str;
		string s;
		loop(j,0,4){
			cin>>s;
			int vwl = 0;
			for(int ki = len(s) - 1; ki >=0; ki--){
				if(isVowel(s[ki]))vwl++;
				if(vwl == k){s = s.substr(ki); break;}
				if(ki == 0){cout<<"NO\n";return 0;}
			}
			str.pb(s);
		}
		if(str[0] == str[1] and str[1] == str[2] and str[2]==str[3])types[i] = mp["aaaa"];
		else if(str[0] == str[2] and str[1] == str[3])types[i] = mp["abab"];
		else if(str[0] == str[3] and str[1] == str[2])types[i] = mp["abba"];
		else if(str[0] == str[1] and str[2] == str[3])types[i] = mp["aabb"];
	}

	int gt = -1;

	loop(i,0,n){
		int t = types[i];
		//cout<<i<<' '<<t<<' '<<gt<<endl;
		if(t == 0){gt = 0;break;}
		if(t == 1 and gt == -1)gt = 1;
		if(t > 1 and (gt > 1 and t != gt)){gt = 0; break;}
		if(t > 1 and (gt < 2 or gt == t))gt = t;	
	}

	if(!gt)cout<<"NO\n";
	if(gt == 1)cout<<"aaaa\n";
	if(gt == 2)cout<<"aabb\n";
	if(gt == 3)cout<<"abab\n";
	if(gt == 4)cout<<"abba\n";

	return 0;
}
