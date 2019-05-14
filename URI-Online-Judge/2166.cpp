#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double r2 = 1;
    double s=1.0/2.0;
    for(int i=1;i<n;i++){
        s+=2;
        s=1/s;

    }
    if(n>0)r2+=s;
    printf("%.10f\n",r2);
    return 0;
}
