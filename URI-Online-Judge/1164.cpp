#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;n++;
    while(n--,n){
        long long int a;
        cin >> a;
        long long int s=0;
        for(int j=1;j<a;j++){
            if(a%j==0)s+=j;
        }
        if(s==a){cout << a << " eh perfeito\n";}else{cout << a << " nao eh perfeito\n";}
    }
    return 0;
}
