#include <iostream>

using namespace std;

int main()
{
    float a,m=0;
    int n=0;
    while(1){
        cin >> a;
        if(a>=0&&a<=10){n++;m+=a;}else{cout << "nota invalida\n";}
        if(n==2)break;
    }
    printf("media = %.2f\n",m/2);
    return 0;

}
