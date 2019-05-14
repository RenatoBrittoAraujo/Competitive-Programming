#include <bits/stdc++.h>

using namespace std;

double golden_ratio = (1+sqrt(5))/2.0;

long long int binet(int n){
    return 1+(int)(pow(golden_ratio,n)-pow(-golden_ratio,-n))/sqrt(5);
}

long long int memo[10000];

long long int fib(int n){
    if(n==1)return memo[n]=0;
    if(n==2)return memo[n]=1;
    else return memo[n]=fib(n-1)+fib(n-2);
}

int main(){
    int n=2;
    while(1){
        int bin = binet(n);
        int fi = fib(n+1);
        if(bin!=fi){
            cout<<"Divergence found on n = "<<n<<" binet's = "<<bin<<" correct value = "<<fi<<endl;
            break;
        }
        else n++;
        cout<<"Fib("<<n<<")= (BINET) "<<binet(n)<<" (CORRECT) "<<fib(n+1)<<endl;
    }
    return 0;
}
