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

int n;ll k,x;

int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%lld%lld",&k,&x);
		printf("%lld\n",x+(k-1)*9);
	}	
	return 0;
}
