#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cin >> a>>b>>c;
    if(a<(b+c)&&b<(c+a)&&c<(a+b)){
        printf("Perimetro = %.1f\n",a+b+c);
    }else{
        printf("Area = %.1f\n",(a+b)*c/2);
    }
    return 0;
}
