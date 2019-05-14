#include <iostream>

using namespace std;

int main()
{
    int a=0,c=0,d=0,e=0,b;
    for(int i =0;i<5;i++){
        cin >>b;
        if(b%2==0)a++;
        else c++;
        if(b>0)d++;
        else if(b!=0)e++;
    }
    cout << a << " valor(es) par(es)\n";
    cout << c << " valor(es) impar(es)\n";
    cout << d << " valor(es) positivo(s)\n";
    cout << e << " valor(es) negativo(s)\n";
    return 0;

}
