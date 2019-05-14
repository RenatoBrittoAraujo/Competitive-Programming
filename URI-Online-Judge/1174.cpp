#include <iostream>

using namespace std;

int main()
{
    float a;
    for(int j=0;j<100;j++){
        cin >> a;
        if(a<=10){
            printf("A[%d] = %.1f\n",j,a);
        }
    }
    return 0;
}
