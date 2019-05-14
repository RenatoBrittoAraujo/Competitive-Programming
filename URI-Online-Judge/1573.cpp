#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c,bool(a+b+c)){
        int v = a*b*c;
        v=cbrt(v);
        cout << v << endl;
    }
    return 0;
}
