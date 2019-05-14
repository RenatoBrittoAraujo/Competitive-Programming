#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int v=n;
        int m=v;
        while(v!=1){
            if(v%2==0)v/=2;
            else{v*=3;v+=1;}
            if(v>m)m=v;
        }
        cout << m << endl;
    }
    return 0;
}

