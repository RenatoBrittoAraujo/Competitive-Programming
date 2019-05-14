#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;n++;
    while(n--,n){
        long long int a;
        cin >> a;
        int s=0;
        for(int j=1;j<a;j++){
            if(a%j==0)s++;
        }
        if(s==1){cout << a << " eh primo\n";}else{cout << a << " nao eh primo\n";}
    }
    return 0;
}
