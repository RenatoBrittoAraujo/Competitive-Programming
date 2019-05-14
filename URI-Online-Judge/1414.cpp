#include <iostream>

using namespace std;

int main()
{
    int t,n;
    while(cin>>t>>n,bool(t+n)){
        string a;
        int x,s=n*3;
        for(int i=0;i<t;i++){
            cin>>a>>x;
            s-=x;
        }
        cout << s << endl;
    }
    return 0;
}
