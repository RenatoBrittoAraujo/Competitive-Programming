#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=1;
    while(cin>>n,n){
        cout<<"Teste "<<t<<endl;
        int v=1;
        for(int i=1;i<n;i++){
            v+=pow(2,i);
        }
        cout<<v<<endl<<endl;
        t++;
    }
    return 0;
}
