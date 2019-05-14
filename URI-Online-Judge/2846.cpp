#include <iostream>

using namespace std;

int mem[100001]={0};

int fib(int n){
    if(mem[n]==0){
        if(n<=1)mem[n]=1;
        else mem[n]=fib(n-1)+fib(n-2);
    }
    return mem[n];
}

int main(){
    int n;
    cin>>n;
    int s=0;
    fib(n+4);
    int i,v=4;
    while(1){
        i=1;
        bool ef=false;
        while(v>=fib(i)){
            i++;
            if(fib(i)==v){ef=true;break;}
        }
        if(!ef)s++;
        if(s==n)break;
        v++;
    }
    cout<<v<<endl;
    return 0;
}
