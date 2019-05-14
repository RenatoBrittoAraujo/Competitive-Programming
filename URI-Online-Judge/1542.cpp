#include <iostream>

using namespace std;

int main()
{
    int q,d,p;
    while(cin>>q,q){
        cin>>d>>p;
        int np = d*p*q/(p-q);
        if(np==1)cout << "1 pagina\n";
        else cout << np << " paginas\n";
    }
    return 0;
}
