#include <iostream>

using namespace std;

int main(){
    string a;
    int j=0,t=0,x;
    while(cin>>a,a!="ABEND"){
        cin>>x;
        if(a=="SALIDA"){
            j++;
            t+=x;
        }else{
            j--;
            t-=x;
        }
    }
    cout<<t<<endl<<j<<endl;
    return 0;
}
