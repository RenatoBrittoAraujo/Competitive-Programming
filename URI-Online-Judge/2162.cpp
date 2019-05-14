#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;n--;
    int s=1;
    int x,o;
    cin >> x;o=x;
    bool f;
    cin >> x;if(o>x)f=true;else if(o<x)f=false;else s=0;o=x;
    while(n--,n){
        cin >>x;
        if(f){
            if(o<x)f=false;
            else {s=0;}
        }else{
            if(o>x)f=true;
            else {s=0;}
        }
        o=x;
    }
    cout << s << endl;
    return 0;
}
