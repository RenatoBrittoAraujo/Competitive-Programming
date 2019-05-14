#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    a++;
    while(a--,a){
        int b;
        cin >> b;
        if(b%2==0){
            cout << "0\n";
        }else{
         cout << "1\n";
        }
    }
    return 0;
}
