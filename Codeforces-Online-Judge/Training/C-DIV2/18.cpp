
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

int fr[10];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	string s;
	cin>>s;
	int n = len(s);
	ll ts = 0;
	loop(i,0,n)ts+=s[i]-'0',fr[s[i]-'0']++;
	int tr = ts%3;
	
	bool f = tr==0;

	//cout<<ts<<' '<<tr<<endl;
	
	//loop(i,0,10)cout<<"FR["<<i<<"]="<<fr[i]<<' ';cout<<endl;

	bool ld = s[1]=='0';
	int iv = s[0]-'0';

	if(!f){
		for(int j=tr;j<10;j+=3)
			if(fr[j] and (!ld or !(iv==j)))
				for(int i=n-1;i>=0;i--)if(s[i]==tr-'0'){s[i]='a';f=1;break;}
	}

	if(!f and iv%3==tr)s[0]='a',f=1;	
	
	if(!f and tr!=0)s="-1";
	
	if(f and len(s)>1)loop(i,0,n){
		if(i==n-1 and s[i]=='0'){s="0";break;}else s="-1";
		if(s[i]=='0' or s[i]=='a')s[i]='a';else break;
	}
	
	if(len(s)==0)s="-1";

	loop(i,0,len(s))if(s[i]!='a')cout<<s[i];
	cout<<endl;
	return 0;
}
