#include <iostream>

using namespace std;

int main()
{
    int a;int alc=0,gas=0,die=0;
    while(cin >> a,a!=4){
        if(a==1)alc++;
        if(a==2)gas++;
        if(a==3)die++;
    }
    cout << "MUITO OBRIGADO\nAlcool: " << alc << "\nGasolina: " << gas << "\nDiesel: " << die << endl;
    return 0;
}
