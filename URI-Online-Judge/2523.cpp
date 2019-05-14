#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string a;
    while(cin>>a,!cin.eof()){
        int b,x;
        cin>>b;
        string c;
        while(b--){
            cin>>x;
            c+=a[x-1];
        }
        cout << c << endl;
    }
    return 0;
}
