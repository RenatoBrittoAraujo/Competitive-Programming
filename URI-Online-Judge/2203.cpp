#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float xf,yf,xi,yi,vi,r1,r2;
    while(cin>>xf>>yf>>xi>>yi>>vi>>r1>>r2,!cin.eof()){
        float d = sqrt(pow(xf-xi,2)+pow(yf-yi,2));
        d+=1.5*vi;
        if(d<=r1+r2){cout << "Y\n";}else{cout << "N\n";}
    }
    return 0;
}
