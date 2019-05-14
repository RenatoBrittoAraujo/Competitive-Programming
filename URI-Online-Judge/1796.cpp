#include <iostream>

using namespace std;

int main()
{
    int q;
    cin>>q;
    int f=0,c=0,x;
    for(int i=0;i<q;i++){
        cin >> x;
        if(x==1)f++;
        else c++;
    }
    if(f<c)cout << "Y\n";
    else cout << "N\n";
    return 0;
}
