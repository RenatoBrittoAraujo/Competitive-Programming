#include <iostream>

using namespace std;

int main()
{
    int x[10];
    for(int i=0;i<10;i++){
        cin >> x[i];
        if(x[i]<1)x[i]=1;
        cout << "X[" << i << "] = " << x[i] << endl;
    }
    return 0;
}