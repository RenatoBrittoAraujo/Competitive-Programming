#include <iostream>

using namespace std;

int main()
{
    int n,r;
    while(cin>>n>>r,!cin.eof()){
        int v[n]={0};
        int x;
        for(int i=0;i<r;i++){
            cin >> x;
            v[x-1]=1;
        }
        int c=0;
        if(r==n)cout << "*\n";
        else if(r<n){for(int i=0;i<n;i++){
            if(v[i]==0){cout << i+1;
            c++;
            cout << " ";
            }
        }cout << endl;}
    }
    return 0;
}
