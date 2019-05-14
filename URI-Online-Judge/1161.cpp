#include <iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m,!cin.eof()){
        unsigned long long int f1=1,f2=1;
        for(long long int i=1;i<=n;i++)f1*=i;
        for(long long int i=1;i<=m;i++)f2*=i;
        cout << f1+f2 << endl;
    }
    return 0;
}
