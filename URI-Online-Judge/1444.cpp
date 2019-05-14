#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        if(n==1){cout<<0<<endl;continue;}
        int s=0;
        while(n>3){
            bool v=n%3;
            n=v+n/3;
            s+=n;
        }
        cout<<s+1<<endl;
    }
    return 0;
}
