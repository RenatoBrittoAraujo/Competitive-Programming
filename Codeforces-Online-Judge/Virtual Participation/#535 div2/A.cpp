//TEMPLATE DO RENATO SINCE 1929
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back
#define ins insert
#define eb emplace_back
using vi = vector<int>;

int q;
int a,b,c,d;

int main(){
	scanf("%d",&q);
	while(q--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int a1 = a;
		int a2 = c;
		if(a1==a2)a2=d;
		if(a1==a2)a1=b;
		cout<<a1<<' '<<a2<<endl;
	}		
	return 0;
}
