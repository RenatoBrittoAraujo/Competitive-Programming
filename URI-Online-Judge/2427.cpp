#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int l;
    cin>>l;
    int nb=1;
    while(l>1){
        if(l%2!=0)l--;
        nb*=4;
        l/=2;
    }
    cout<<nb<<endl;
}
