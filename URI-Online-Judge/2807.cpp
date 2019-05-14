#include <iostream>
using namespace std;
int mem[41]={0};
int fib(int n){
    if(mem[n]==0){
        if(n<=1){
            mem[n]=1;
        }
        else{
            mem[n]=fib(n-1)+fib(n-2);
       }
    }
    return mem[n];
}
int main(){
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        cout<<fib(i);
        if(i>0)cout<<" ";
    }
    cout<<endl;
    return 0;
}
