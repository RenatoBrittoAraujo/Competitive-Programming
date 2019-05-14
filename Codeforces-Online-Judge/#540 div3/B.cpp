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

int ca[N*2];
int cpn[N*2];
int cmn[N*2];
int cpi[N*2];
int cmi[N*2];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	int s1=0,s2=0;
	loop(i,0,n){cin>>ca[i];if(i%2==0)s1+=ca[i];else s2+=ca[i];cpn[i]=s1;cmn[i]=s2;}
	s1=0;s2=0;	
	for(int i=n-1;i>=0;i--){if(i%2==0)s1+=ca[i];else s2+=ca[i];cpi[i]=s1;cmi[i]=s2;}
	int sum = 0;
	loop(i,0,n){
		if(cpn[i]-ca[i]+cmi[i]==cmn[i]-ca[i]+cpi[i])sum++;
	}	
	cout<<sum<<endl;
	return 0;
}
