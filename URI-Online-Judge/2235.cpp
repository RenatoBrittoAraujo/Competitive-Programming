#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool s=false;
    if(a==b||a==c||b==c)s=true;
    else{
        if(c>b){int t=c;c=b;b=t;}
        if(b>a){int t=a;a=b;b=t;}
        if(a==b+c)s=true;
    }
    if(s)cout << "S\n";
    else cout << "N\n";
    return 0;
}
