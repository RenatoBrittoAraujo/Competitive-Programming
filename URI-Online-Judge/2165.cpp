#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string t;
    getline(cin,t);
    if(t.size()<=140)cout << "TWEET\n";
    else cout << "MUTE\n";
    return 0;
}
