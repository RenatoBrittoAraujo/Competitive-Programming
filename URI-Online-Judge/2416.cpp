#include <iostream>

using namespace std;

int main()
{
    int m,c;
    cin>>m>>c;
    int r = m/c;
    int d = m - r*c;
    cout << d << endl;
    return 0;
}
