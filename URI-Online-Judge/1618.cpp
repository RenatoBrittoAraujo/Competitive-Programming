#include <iostream>

using namespace std;

int main()
{
    int n;

    while(cin >> n,!cin.eof()){
        while(n--){
        int ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;
        if(rx >= ax && ry >= ay && rx <= cx && ry <= cy)cout << "1\n";
        else cout << "0\n";}

    }
    return 0;
}
