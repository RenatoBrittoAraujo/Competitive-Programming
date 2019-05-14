#include <iostream>

using namespace std;

int main()
{
    int xm,ym,xr,yr;
    cin>>xm>>ym>>xr>>yr;
    int s=0;
    s+=abs(xm-xr)+abs(ym-yr);
    cout << s << endl;
    return 0;
}
