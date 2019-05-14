#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    for(int i=0;i<100;i++){
        printf("N[%d] = %.4f\n",i,n);
        n/=2;
    }
}
