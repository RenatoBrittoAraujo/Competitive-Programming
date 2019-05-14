#include <iostream>

using namespace std;

int main()
{
    int i;
    cin >> i;
    for(int j=0;j<10;j++){
        cout << "N[" << j<<"] = "<<  i << endl;
        i*=2;
    }
    return 0;
}
