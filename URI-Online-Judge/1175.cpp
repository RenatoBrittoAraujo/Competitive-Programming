#include <iostream>

using namespace std;

int main()
{
    int a[20];
    for(int j=0;j<20;j++){
        cin >> a[j];
    }
    for(int j=0;j<20;j++){
        cout << "N["<<j<< "] = "<< a[19-j]<<endl;
    }
    return 0;
}
