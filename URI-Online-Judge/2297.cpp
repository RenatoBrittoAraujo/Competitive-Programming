#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,r=1;
    while(cin>>c,c){
        int a=0,b=0,x,y;
        while(c--){
            cin>>x>>y;
            a+=x;b+=y;
        }
        cout<<"Teste "<<r<<endl;
        if(a>b)cout<<"Aldo\n";
        else cout<<"Beto\n";
        r++;
        cout<<endl;
    }
    return 0;
}
