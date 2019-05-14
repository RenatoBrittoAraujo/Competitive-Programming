#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;n++;
    float v=0;
    while(n--,n){
        int a,b;
        cin >> a >> b;
        switch(a){
    case 1001:
        v+=1.5*b;
        break;
        case 1002:
            v+=2.5*b;
        break;
        case 1003:
            v+=3.5*b;
        break;
        case 1004:
            v+=4.5*b;
        break;
        case 1005:
            v+=5.5*b;
        break;
        }
    }
    printf("%.2f\n",v);
    return 0;
}
