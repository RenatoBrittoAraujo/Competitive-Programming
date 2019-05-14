#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Existe a maneira generalizada e correta

ll fexp(ll base, ll exp, ll mod){

	ll ans = 1;

	while(exp > 0){

		if(exp & 1)ans = ans * base % mod;

		exp >>= 1;

		base = base * base % mod;

	}

	return ans;

}

int main(){

	int casos;
	cin>>casos;
	int exp;
	while(casos--){
		cin>>exp;
		cout<<fexp(7, exp, 10)<<endl;
	}

}

// E a maneira migué que funciona só nesse caso: 

/*

int s[4]={1,7,9,3};

int main()
{
    int c;
    cin>>c;
    int n;
    while(c--){
        scanf("%d",&n);
        printf("%d\n",s[n%4]);
    }
    return 0;
}

*/
