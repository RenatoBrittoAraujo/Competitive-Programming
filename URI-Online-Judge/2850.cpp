#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a),!cin.eof()){
        if(a=="esquerda")cout<<"ingles\n";
        if(a=="direita")cout<<"frances\n";
        if(a=="nenhuma")cout<<"portugues\n";
        if(a=="as duas")cout<<"caiu\n";
    }
    return 0;
}
