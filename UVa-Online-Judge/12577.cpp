#include <iostream>

using namespace std;

int main()
{
    string a;
    int c=1;
    while(cin>>a,a[0]!='*'){
        cout<<"Case "<<c<<": ";
        if(a=="Hajj")cout<<"Hajj-e-Akbar\n";
        else cout<<"Hajj-e-Asghar\n";
    }
    return 0;
}
