#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int m=1;
    for(int i=0;i<n;i++){
        m*=3;
    }
    cout<<m<<endl;
    return 0;
}
