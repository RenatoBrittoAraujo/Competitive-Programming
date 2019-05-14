#include <iostream>

using namespace std;

int main()
{
    int m,n;
    while(cin >> m>>n,!(n==m)){
        if(m>n){
            cout << "Decrescente\n";
        }else{
            cout << "Crescente\n";
        }
    }
    return 0;

}
