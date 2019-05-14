#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int g=0;
    while(c--){
        int x;
        cin>>x;
        if(x!=1)g++;
    }
    cout<<g<<endl;
    return 0;
}
