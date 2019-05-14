#include <iostream>

using namespace std;

int main()
{
    int b,n;
    while(cin>>b>>n,bool(b+n)){
        int r[b],de,cr,d;
        for(int i=0;i<b;i++)cin>>r[i];
        bool c=true;
        for(int i=0;i<n;i++){
            cin>>de>>cr>>d;
            r[de-1]-=d;
            r[cr-1]+=d;
        }
        for(int i=0;i<b;i++)if(r[i]<0)c=false;
        if(c)cout << "S\n";
        else cout << "N\n";

    }
    return 0;
}
