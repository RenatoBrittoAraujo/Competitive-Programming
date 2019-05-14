#include <iostream>

using namespace std;

int main()
{
    long long int n,m;
    while(cin>>n>>m,!cin.eof()){
        long long int v = abs(n-m);
        cout<<v<<endl;
    }
    return 0;
}
