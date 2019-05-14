#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b,bool(a+b)){
        int s = a+b;
        string a = to_string(s);
        int t = a.size();
        for(int i=0;i<t;i++)if(a[i]!='0')cout<<a[i];
        cout << endl;
    }
    return 0;
}
