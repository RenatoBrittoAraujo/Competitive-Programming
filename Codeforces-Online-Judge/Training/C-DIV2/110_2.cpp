
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
	
	string s,t;
	cin>>s>>t;
	
	string str;
	loop(i,0,2000)
		str += '.';
		
	s = str + s;
	s = s + str;
	
	int mm = 0;

	loop(i,0,len(s)){
		
		int cnt = 0;

		loop(j,0,min(len(s) - i, len(t))){

			if(s[i + j] == t[j])
				cnt++;

		}

		mm = max(cnt, mm);

	}

	cout<<len(t) - mm<<endl;

	return 0;
}
