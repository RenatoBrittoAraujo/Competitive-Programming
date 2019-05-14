#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y;
        cin>>x>>y;
        bool pa = true;
        if(b=="IMPAR")pa=false;
        bool v=false;
        if(((x+y)%2==0&&!pa)||((x+y)%2!=0&&pa))v=true;
        if(v)cout<<c;
        else cout<<a;
        cout<<endl;

    }
    return 0;
}
