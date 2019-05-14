#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b,bool(a+b)){
        int c=a*3-a-b;
        cout << c << endl;
    }
    return 0;
}

