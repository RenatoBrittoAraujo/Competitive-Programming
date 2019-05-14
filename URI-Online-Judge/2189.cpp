#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=1;
    while(cin>>n,n){
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            bool p=true;
            if(x==i+1&&p){
                cout<<"Teste "<<t<<endl;
                cout<<i+1<<endl;
                p=false;
            }
        }
        cout<<endl;
        t++;
    }
    return 0;
}
