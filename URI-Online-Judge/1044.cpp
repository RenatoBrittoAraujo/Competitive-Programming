#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(b>a){int t=a;a=b;b=t;}
    if(a%b==0){
     cout << "Sao Multiplos\n";
    }else{
        cout << "Nao sao Multiplos\n";
    }
    return 0;
}
