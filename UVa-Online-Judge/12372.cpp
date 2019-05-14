#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int i=1;i<=c;i++){
        int x;
        bool val=1;
        for(int i=0;i<3;i++){
            cin>>x;
            if(x>20)val=0;
        }
        cout<<"Case "<<i<<": ";
        if(val)cout<<"good\n";
        else cout<<"bad\n";
    }
    return 0;
}
