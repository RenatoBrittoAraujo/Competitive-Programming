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

int com[N];
int n;
int a;

double area(double h){
	int i=n-1;
	int tarea = 0;
	while(i>=0 and com[i]>h){
		tarea += com[i]-h;
		i--;
	}
	//cout<<"RETURNING "<<tarea<<endl;
	return tarea;
}

int main(){
	while(1){
		sc(n);sc(a);
		if(n==0 and a==0)break;
		for(int i=0;i<n;i++)sc(com[i]);
		sort(com,com+n);
		//for(int i=0;i<n;i++)cout<<com[i]<<' ';cout<<endl;
		double hi = com[n-1];
		double lo = 0;
		while(hi-lo>1e-5){
			//cout<<hi<<' '<<lo<<endl;
			double mid = (hi+lo)/2;
			if(area(mid)<=a)hi=mid;
			else lo=mid;
		}
		printf("%.4f\n",hi);
		
	}
	return 0;
}


