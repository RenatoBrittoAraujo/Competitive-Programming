#include <iostream>

using namespace std;

int main()
{
    int h,u,d,f;
    while(cin>>h>>u>>d>>f,h){
        float fa = u*float(f)/100.0;
        int da=1;
        float ch=0;
        while(1){
            if(u-fa*(da-1)>0)ch+=u-fa*(da-1);
            if(ch>h){cout<<"success on day ";break;}
            ch-=d;
            if(ch<0){cout<<"failure on day ";break;}
            da++;
        }
        cout<<da<<endl;
    }
    return 0;
}
