#include <bits/stdc++.h>

using namespace std;

int gcd(int u,int v)
{
    if (u == v)return u;
    if (u == 0)return v;
    if (v == 0)return u;
    if (~u & 1)
    {
        if (v & 1)return gcd(u >> 1, v);
        else return gcd(u >> 1, v >> 1) << 1;
    }
    if (~v & 1)return gcd(u, v >> 1);
    if (u > v)
        return gcd((u - v) >> 1, v);
    return gcd((v - u) >> 1, u);
}

int main() {
	int num, den, apostas[101], cont=0;
	while (cin >> num >> den) {
		 apostas[cont] = gcd(num,den);
		 cont++;
		 if  (apostas[cont-1]>5) cout << "Noel" ;
		 else cout << "Gnomos";
         cout<<endl;
	}
	for (int i=cont-1; i>=0; i--) {
		cout << apostas[i];
		cout<<" ";
	}
	cout<<endl;
	return 0;
}
