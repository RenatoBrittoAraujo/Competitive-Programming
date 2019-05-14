#include <iostream>

using namespace std;

int main()
{
    float i=0;
    float s=0;
    float j=0;
    while(1){
        j++;
        if(i>2.1)break;
        cout << "I=" << i << " J=" << j << endl;
        if(j>=3+s-0.1){s=s+0.2;i+=0.2;j=s;}
    }
    return 0;

}
