#include <iostream>

using namespace std;

int main()
{
    int a=0,b;
    for(int i =0;i<5;i++){
        cin >>b;
        if(b%2==0)a++;
    }
    cout << a << " valores pares\n";
    return 0;

}
