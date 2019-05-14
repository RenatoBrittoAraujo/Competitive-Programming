#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t=1;
    while(cin>>n,n){
        int j=0,z=0,x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            if(i==0)cout<<"Teste "<<t<<endl;
            j+=x;
            z+=y;
            cout<<j-z<<endl;
        }
        t++;
        cout<<endl;
    }
    return 0;
}
