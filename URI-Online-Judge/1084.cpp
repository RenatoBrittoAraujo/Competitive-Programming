#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using ii = pair<int,int>;
const int mod = 1e9+7;
#define ff first
#define ss second
#define pb push_back
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define pr(x) printf("%d",x)
#define prl(x) printf("%lld",x)
#define pbr() printf("\n");
const int N = 1e5+10;
int n,d;
string s;
int main(){
	while(sc(n),sc(d),bool(n+d)){
		cin>>s;
		int v=0;
		while(d){
			//::cout<<"On d = "<<d<<endl;
			for(int i=0;i<n&&d;i++)if(s[i]-48==v)s.erase(s.begin()+i),i--,d--;
			v++;
		}
		cout<<s<<endl;
	}
	return 0;
}


