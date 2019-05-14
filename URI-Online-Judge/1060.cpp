#include <iostream>

using namespace std;

int main()
{
    int p=0;
    float a;
    for(int i=0;i<6;i++){
        cin >> a;
        if(a>0)p++;
    }
    cout << p << " valores positivos\n";
    return 0;

}
