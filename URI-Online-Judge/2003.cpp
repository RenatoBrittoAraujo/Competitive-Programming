#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%*[\t:]%d",&a,&b)!=EOF){
        int atr = (a+1)*60+b-8*60;
        if(atr<0)atr=0;
        cout << "Atraso maximo: " << atr << endl;
    }
    return 0;
}
