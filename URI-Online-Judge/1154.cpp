#include <iostream>

using namespace std;

int main()
{
    float i,s,n;s=0;n=0;
    while(cin >> i,i>=0){
        s+=i;
        n++;
    }
    if(n==0)printf("0.00\n");
    else printf("%.2f\n",s/n);
    return 0;
}
