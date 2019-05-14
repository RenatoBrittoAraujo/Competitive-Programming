
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

using pp  = pair<double,double>;

struct line{
	double a,b,c;
	line(double _a,double _b,double _c) : a(_a) , b(_b), c(_c){}
};

pp x;

bool arep(line l1,line l2){
	return (fabs(l1.a - l2.a) < err) && (fabs(l1.b - l2.b) < err);
}

bool inter(line l1,line l2){
	if(arep(l1,l2))return 0;
	x.ff = (l2.b*l1.c - l1.b*l2.c) / (l2.a * l1.b - l1 .a* l2.b);
	if(fabs(l1.b) > err)x.ss = -(l1.a * x.ff + l1.c);
	else x.ss = -(l2.a * x.ff + l2.c);
	return 1;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	
	
		
	return 0;
}
