#include <iostream>

using namespace std;

int main()
{
    bool a[5],b[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    bool c=true;
    for(int i=0;i<5;i++){
        if(a[i]==b[i])c=false;
    }
    if(c)cout << "Y\n";
    else cout << "N\n";
    return 0;
}
