
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

ll ext_gdc(ll a, ll b, ll &x, ll &y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}

	ll x1, y1, d = ext_gdc(b, a%b, x1, y1);

	x = y1;
	y = x1 - y1 * (a / b);

	return d;
}

int main(){

	cout<<"INPUT: A*x + B*y = C\n";
	ll a,b,c;
	cout<<"A: ";
	cin>>a;
	cout<<"B: ";
	cin>>b;
	cout<<"C: ";
	cin>>c;

	ll x, y;
	
	ll d = ext_gdc(a, b, x, y);

	if(c % d){
		cout<<"\nNo Solutions found\n";
		return 0;
	}

	ll k = c / d;
	x *= k;
	y *= k;
	
	cout<<"\nParticular Solution:\n";
	cout<<"X = "<<x<<" and Y = "<<y<<endl;
	
		
	cout<<"\nGeneral Solution:\n";
	cout<<c<<" = "<<a<<" * ("<<x<<" + "<<y / d<<" * N) + "<<b<<" * ("<<y<<" + "<<x / d<<" * N)\n";	
	cout<<"For any integer value of N\n";	

	return 0;
}
