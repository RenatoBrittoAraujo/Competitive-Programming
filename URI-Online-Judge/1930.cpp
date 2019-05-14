#include <iostream>
using namespace std;

int main()
{
    int s=0,x;
    for(int i=0;i<4;i++){
        cin>>x;
        s+=x;
    }
    cout << s-3 << endl;
    return 0;
}
