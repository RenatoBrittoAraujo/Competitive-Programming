#include <iostream>

using namespace std;

void printa(int n,int a[5]){
        bool par=true;
        if(!(a[0]%2==0))par=false;
        for(int i=0;i<n;i++){
        if(par){
            cout << "par["<<i<<"] = " << a[i] << endl;
        }else{
            cout << "impar["<<i<<"] = " << a[i]<< endl;
        }
        }
    }

int main()
{
    int im[5],pa[5],ni=0,np=0,x;
    for(int i=0;i<15;i++){
        cin >> x;
        if(ni==5){
            printa(ni,im);
            ni=0;
        }
        if(np==5){
            printa(np,pa);
            np=0;
        }
        if(x%2==0){
            pa[np]=x;np++;
        }else{
            im[ni]=x;ni++;
        }
    }
    printa(ni,im);
    printa(np,pa);

}
