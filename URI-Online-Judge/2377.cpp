#include <iostream>

using namespace std;

int main()
{
    int l,d;
    cin>>l>>d;
    int k,p;
    cin>>k>>p;
    float a=float(l)/float(d);
    int np = int(a);
    int c = l*k+np*p;
    cout << c << endl;
    return 0;
}

