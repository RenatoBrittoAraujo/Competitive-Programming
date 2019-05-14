#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int h=min(max(a,b),max(c,d));
    int ba=min(a,b)+min(c,d);
    int ae;
    if(ba>=h)ae=h*h;
    else ae=ba*ba;
    cout<<ae<<endl;
    return 0;
}
