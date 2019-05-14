#include <iostream>

using namespace std;

int main(){
    int x,y,c,a,b;
    while(cin>>x,!cin.eof()){
        cin>>y>>c;
        while(c--){
            cin>>a>>b;
            if(!(a>x||b>y)||!(a>y||b>x))cout<<"Sim\n";
            else cout <<"Nao\n";
        }
    }
    return 0;
}
