#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int val;
        int v1=int(a[0])-48;
        int v2=int(a[2])-48;
        if(a[0]==a[2]){val=v1*v2;}
        else if(tolower(a[1])==a[1]){val=v1+v2;}
        else if(toupper(a[1])==a[1]){val=v2-v1;}
        cout << val << endl;
    }
    return 0;
}
