#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        unsigned long long int g =1;
        for(int i=1;i<=n;i++){
            if(i==64)g/=6000;
            g*=2;
        }
        if(n!=64){g/=12000;}
        else g/=2;
        cout<<g<<" kg"<<endl;
    }
    return 0;
}
