#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        bool p=false;
        int x = sqrt(n)+1;
        for(int i=0;i<x;i++){
            for(int j=i;j<x;j++){
                if(i*i+j*j==n){p=true;break;}
            }
        }
        if(p)cout<<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}

