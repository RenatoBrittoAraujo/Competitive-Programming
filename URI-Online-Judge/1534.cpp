#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j&&n%2!=0&&i==n/2)cout<<"2";
                else if(i==j)cout<<"1";
                else if(j==n-i-1)cout<<"2";
                else cout <<"3";
            }
            cout<<endl;
        }
    }
    return 0;
}
