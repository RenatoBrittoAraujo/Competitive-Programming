#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

int n;

ll derr(int n){
    if(n==0)return 1;
    if(n==1)return 0;
    else return (n-1)*(derr(n-1)+derr(n-2));
}

ll fact(int n){
    ll r=1;n++;
    while(n--)if(n>0)r*=n;
    return r;
}

int main(){
    int c;
    cin>>c;
    while(c--){
        cin>>n;
        cout<<derr(n)<<'/'<<fact(n)<<endl;
    }
    return 0;
}
