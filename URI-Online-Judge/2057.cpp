#include <iostream>

using namespace std;

int main()
{
    int s,t,f;
    cin >> s >> t >> f;
    int tv = s+t+f;
    if(tv>=24)tv-=24;
    if(tv<0)tv+=24;
    cout << tv << endl;
    return 0;
}
