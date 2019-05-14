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
#define pbr() printf("\n")
const int N = 1e5+10;

const double pi = acos(-1.0);
double a,b,c;

int main(){
	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
	double rad1 = a*b*c;
	double rad1a = sqrt((a+b+c)*(b+c-a)*(c+a-b)*(b+a-c));
	rad1 /= rad1a;
	double s = (a+b+c)/2.0;
	double arrt = sqrt(s*(s-a)*(s-b)*(s-c));
	double arr1 = rad1*rad1*pi;
	double rad2 = arrt/s;
	double arr2 = rad2*rad2*pi;
	printf("%.4f %.4f %.4f\n",arr1-arrt,arrt-arr2,arr2);}
	return 0;
}


