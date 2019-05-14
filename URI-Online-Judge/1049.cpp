#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    if(a=="vertebrado"){
        if(b=="mamifero"){
            if(c=="onivoro"){
                cout << "homem\n";
            }else{
                cout << "vaca\n";
            }
        }else{
            if(c=="onivoro"){
                cout << "pomba\n";
            }else{
                cout << "aguia\n";
            }
        }
    }else{
        if(b=="inseto"){
            if(c=="hematofago"){
                cout << "pulga\n";
            }else{
                cout << "lagarta\n";
            }
        }else{
            if(c=="hematofago"){
                cout << "sanguessuga\n";
            }else{
                cout << "minhoca\n";
            }
        }
    }
    return 0;
}
