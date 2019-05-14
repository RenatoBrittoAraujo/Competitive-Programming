#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    a++;
    while(a--,a){
        string b;int c;
        cin >> b >>c ;
        if(b=="Thor"){
            cout << "Y\n";
        }else{
            cout << "N\n";
        }
    }
    return 0;
}
