#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int a,b;
        cin>>a>>b;
        int p=1;
        if(a==0&&b==0)p=0;
        while(a>0){p*=26;a--;}
        while(b>0){p*=10;b--;}
        cout<<p<<endl;
    }
    return 0;
}
