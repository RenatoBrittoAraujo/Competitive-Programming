#include <iostream>

using namespace std;

int main()
{
    int x;
    while(cin>>x,!cin.eof()){
        cout << x-1 << endl;
    }
    return 0;
}
