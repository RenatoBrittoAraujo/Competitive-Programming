#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int n;
ll n1,f1,d1,n2,f2,d2;

ll gdc(ll a,ll b){return b==0?a:gdc(b,a%b);}

ll lcm(ll a,ll b){return a*(b/gdc(a,b));}

int main(){
	cin>>n;
	while(n--){
		cin>>n1>>f1>>d1>>n2>>f2>>d2;
		ll st = max(f1,f2);
		bool str=0;
		if(f2>f1)str=1;
		ll en = min(d1*(n1-1)+f1,d2*(n2-1)+f2);
		ll p=st;
		ll step = str?d2:d1;
		while(1){
			if((p-f1)%d1==0&&(p-f2)%d2==0)break;
			p+=step;
			if(p>en-st)break;
		}
		cout<<1+(en-p)/lcm(d1,d2)<<endl;
	}
}
