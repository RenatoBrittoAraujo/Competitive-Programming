
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

bool v[N];

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
		
	string s;
	cin>>s;	
	const int n = len(s);
	stack<pair<bool, int>> cs;
	//loop(i,0,len(v))cout<<v[i];cout<<endl;
	//return 0;
	loop(i,0,n){
		//cout<<"ON "<<i<<endl;
		const char c = s[i];
		if(c == '[')cs.push(ii(1,i)); 
		else if(c == '(')cs.push(ii(0,i));
		else if(!cs.empty() and 
			((c == ']' and (cs.top().ff)) or 
			(c == ')' and !(cs.top().ff)))){
			v[i] = 1;
			v[cs.top().ss] = 1;
			cs.pop();
		}else cs = stack<pair<bool, int>>();
	}		

	//cout<<"FIRST PART DONE\n";
	//loop(i,0,len(s))cout<<v[i];cout<<endl;
	//return 0;
	int st, cnt = 0, crr = 0, cst;
	
	loop(i,0,n){
		if(v[i] == 0){
			crr = 0;
			cst = -1;
		}else{
			if(cst == -1) cst = i;
			if(s[i] == '[')crr++;
			if(crr > cnt){
				cnt = crr;	
				st = cst;
			}
		}	
	}
	
	
	cout<<cnt<<endl;
	string out;
	if(cnt){
		int i = st;
		while(i < n and v[i])out += s[i++];
	}
	cout<<out<<endl;
	return 0;
}
