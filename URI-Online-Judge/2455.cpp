#include <iostream>

using namespace std;

int main()
{
    int p1,c1,p2,c2;
    cin>>p1>>c1>>p2>>c2;
    int r;
    if(p1*c1>p2*c2)r=-1;
    else if(p1*c1==p2*c2)r=0;
    else r = 1;
    cout << r << endl;
    return 0;
}

