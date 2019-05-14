
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

struct vec{
	int x,y;
	vec(int v1,int v2):x(v1),y(v2){}
};

double dotprod(vec v1,vec v2){return v1.x*v2.x + v1.y*v2.y;}

double norma(vec v){return v.x*v.x + v.y*v.y;}

double ang(vec v1,vec v2){
	return acos(dotprod(v1,v2)/sqrt(norma(v1)*norma(v2)));;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	int n;	
	cin>>n;
	vector<double> angs;
	int x,y;
	vec normal = vec(1,0);
	loop(i,0,n){
		cin>>x>>y;
		double a = ang(vec(x,y),normal)*180.0/acos(-1.0);
		if(y>0)angs.pb(a);
		else angs.pb(360.0-a);
		//cout<<angs[i]<<endl;
	}	
	sort(allv(angs));
	double mx = 0;
	loop(i,1,n){
		double dif = angs[i] - angs[i-1];
		//cout<<i<<' '<<dif<<endl;
		if(dif>mx)mx = dif;
	}

	double ldif = angs[0] - angs[n-1] + 360.0;
	if(ldif > mx)mx = ldif;
	
	cout<<fixed<<setprecision(10)<<360.0-mx<<endl;
	
	return 0;
}
