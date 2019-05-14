#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double a = (1+sqrt(5))/2;
    double b = (1-sqrt(5))/2;
    double c = pow(a,n)-pow(b,n);
    double f = c/sqrt(5);
    //int x = int(f);
    //f = double(x);
    printf("%.1f\n",f);
    return 0;
}
