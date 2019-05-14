#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    a++;
    while(a--,a){
        int b;
        cin >> b;
        if(2015-b>0){
            cout << 2015-b << " D.C.\n";
        }else{
            cout << b-2014 << " A.C.\n";
        }
    }
    return 0;
}
