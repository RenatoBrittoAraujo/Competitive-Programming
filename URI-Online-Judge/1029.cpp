#include <iostream>

using namespace std;

int s;

int fib(int n){
    s++;
    if(n==0)return 0;
    else if(n==1)return 1;
    else return fib(n-1)+fib(n-2);
}

int main()
{
    int n,c;
    cin>>c;
    while(c--){
        cin>>n;
        s=0;
        int v = fib(n);
        s--;
        cout << "fib("<<n<<") = "<<s<<" calls = "<<v<<endl;
    }
    return 0;
}
