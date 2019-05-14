#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    if(a.size()<=80)cout <<"YES\n";
    else cout << "NO\n";
    return 0;
}
