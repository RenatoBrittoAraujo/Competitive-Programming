#include <iostream>

using namespace std;

int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2,bool(h1+h2+m1+m2)){
        int t = h2*60+m2-h1*60-m1;
        if(t<0)t+=60*24;
        cout << t << endl;
    }
    return 0;
}
