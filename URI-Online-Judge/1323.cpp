#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int s=0;
        for(int i=1;i<=n;i++){
            s+=i*i;
        }
        cout<<s<<endl;
    }
    return 0;
}
