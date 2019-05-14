#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll rem = 1e9+7;

ll n;

ll exp_rapida(ll base, ll exp){
	if(exp == 0) return 1;
	ll result = exp_rapida(base,exp/2);
	result = (result*result)%rem;
	if(exp % 2 == 1) result = (result*base)%rem;
	return result;
}

/*ll sumn(ll n){
	return n*((n+1)*exp_rapida(2,rem-2)%rem)-n;
}*/

ll sumn(ll n){
	ll v1 = (n*((n+1)%rem))%rem;
	//cout<<n<<endl;
	ll v2 = (exp_rapida(2,rem-2))%rem;
	//cout<<v1<<' ' <<v2<<endl;
	return (v1*v2)%rem;
}

int main(){
	//cout << rem << endl;
	cin>>n;
	//cout << exp_rapida(2, rem-2) << endl;
	cout<<sumn(exp_rapida(2,n))<<endl;
}
