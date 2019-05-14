#include <iostream>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        if(n>8000)cout<<"Mais de 8000!\n";
        else cout<<"Inseto!\n";
    }
    return 0;
}
