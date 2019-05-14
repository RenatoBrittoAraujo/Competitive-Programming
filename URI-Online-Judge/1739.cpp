#include <iostream>

using namespace std;

long long int mem[400]={0};

long long int fib(int n){
    if(mem[n]==0){
        if(n<=1)mem[n]=1;
        else mem[n]=fib(n-1)+fib(n-2);
    }
    return mem[n];
}

int main(){
    int n;
    while(cin>>n,!cin.eof()){
        int tb=0,in=3;
        while(tb<n){
            long long int v = fib(in);
            if(v%3==0)tb++;
            else{
            string a = to_string(v);
            for(int i=0;i<a.size();i++){
                if(a[i]=='3'){
                    tb++;
                    break;
                }
            }}
            if(tb==n)cout<<v<<endl;
            in++;
        }
    }
    return 0;
}
