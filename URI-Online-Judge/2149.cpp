#include <bits/stdc++.h>

using namespace std;

long long int phil(long long int n){
    if(n<3){
        if(n==1)return 0;
        else return 1;
    }else if(n%2!=0)return phil(n-1)+phil(n-2);
    else return phil(n-1)*phil(n-2);
}

int main(){
    long long int n;
    while(cin>>n,!cin.eof()){
        cout<<phil(n)<<endl;
    }
    return 0;
}
