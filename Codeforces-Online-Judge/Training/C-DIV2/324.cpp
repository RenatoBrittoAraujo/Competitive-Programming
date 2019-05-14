
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

int f(string a,string b){
	int n = 0;
	loop(i,0,len(a))n+=a[i]!=b[i];
	return n;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,t;
	cin>>n>>t;
	string a,b;
	cin>>a>>b;
	string c(n,'0');
	
	int v1 = n-t;
	int v2 = v1;	

	loop(i,0,n)if(a[i]==b[i] and v1 and v2)c[i] = a[i],v1--,v2--;

	loop(i,0,n){
		if(c[i]!='0')continue;
		if(v1 and a[i]!=b[i])c[i] = a[i],v1--;
		else if(v2 and b[i]!=a[i])c[i] = b[i],v2--;
		else{
			loop(j,0,25){
				if('a'+j!=a[i] and 'a'+j!=b[i]){c[i] = 'a'+j;break;}
			}
		}
	}
	
	//cout<<"RESULTING STRING = "<<c<<endl;
	
	if(f(c,a)==f(c,b) and f(c,a)==t)cout<<c<<endl;
	else cout<<-1<<endl;
	return 0;
}
