#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    n++;
    while(n--,n){
        cout << "Ho";
        if(n!=1){
            cout << " ";
        }else{
            cout << "!";
        }
    }cout <<endl;
    return 0;
}
