#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    int h;
    cin >> a >>b;
    if(a<b){
        h=b-a;
    }else{
        h=24-a+b;
    }
    cout << "O JOGO DUROU " << h << " HORA(S)\n";
    return 0;
}
