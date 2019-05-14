#include <iostream>

using namespace std;

int main()
{
    float n,d;
    while(scanf("%f %f",&n,&d)!=EOF){
        float a = 3.14*(d/2)*(d/2);
        float h = n/a;
        printf("ALTURA = %.2f\nAREA = %.2f\n",h,a);
    }
    return 0;
}
