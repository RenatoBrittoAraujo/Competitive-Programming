#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int s=0;
    while(c--){
        string a;
        cin>>a;
        if(a[0]=='d'){
            int x;
            cin>>x;
            s+=x;
        }
        else cout<<s<<endl;
    }
    return 0;
}
