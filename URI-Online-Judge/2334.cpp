#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x;
    while(cin>>x,x!=-1){
        if(x>0)x--;
        cout << x << endl;
    }
    return 0;
}
