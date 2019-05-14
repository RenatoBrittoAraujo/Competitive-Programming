#include <iostream>

using namespace std;

int main()
{
    bool p,r;
    cin >> p >> r;
    if(p&&r)cout << "A\n";
    else if(p)cout << "B\n";
    else cout << "C\n";
    return 0;
}
