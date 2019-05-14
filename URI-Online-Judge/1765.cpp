#include <iostream>

using namespace std;

int main()
{
    int t;
    while(cin>>t,t){
        float h = 5;
        float b1,b2;
        int q;
        for(int i=0;i<t;i++){
            cin>>q;
            cin>>b1>>b2;
            float a = h*(b1+b2)/2.0;
            printf("Size #%d:\nIce Cream Used: %.2f cm2\n",i+1,a*q);
        }cout << endl;
    }
    return 0;
}
