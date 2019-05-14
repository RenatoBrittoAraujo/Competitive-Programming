#include <iostream>

using namespace std;

int main()
{
    int s;
    while(1){
        cin >> s;
        if(s!=2002){
            cout << "Senha Invalida\n";
        }else{
            cout << "Acesso Permitido\n";
            break;
        }
    }
    return 0;

}
