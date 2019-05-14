#include <iostream>

using namespace std;

int main()
{
    int a,d;
    while(cin>>a>>d,bool(a+d)){
        int ma,md,msd=10000,x;
        for(int i=0;i<a;i++){
            cin>>x;
            if(i==0||x<ma)ma=x;
        }
        int de[d];
        for(int i=0;i<d;i++){
            cin>>de[i];
        }
        for(int i=0;i<d;i++){
            for(int j=i+1;j<d;j++){
                if(de[i]>de[j]){int t=de[i];de[i]=de[j];de[j]=t;}
            }
        }
        md=de[0];
        msd=de[1];
        if(ma>=msd)cout << "N\n";
        else cout << "Y\n";
    }
    return 0;
}

