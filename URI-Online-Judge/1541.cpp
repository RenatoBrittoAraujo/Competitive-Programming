#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b;float c;
    while(cin >>a,a){
        cin >> b >>c;
        int ar = a*b;
        c/=100;c=1/c;ar*=c;
        int art = sqrt(ar);
        cout << art << endl;
    }
}
