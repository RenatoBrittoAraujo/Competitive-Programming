#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        int v=n/3;
        v=(n-2*v-1)/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(abs(i-n/2)<=v&&abs(j-n/2)<=v){
                    if(i==n/2&&j==n/2)cout<<"4";
                    else cout<<"1";
                }else{
                    if(i-j==0)cout<<"2";
                    else if(i==n-j-1)cout<<"3";
                    else cout<<"0";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
