#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    cin.ignore();
    while(c--){
        string a;
        getline(cin,a);
        string b;
        int t = a.size();
        for(int i=t/2-1;i>=0;i--)b+=a[i];
        for(int i=t-1;i>=t/2;i--)b+=a[i];
        cout << b << endl;
    }
    return 0;
}
