#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int x0,y0,x,y;
        cin >>x0>>y0;
        while(n--){

            cin>>x>>y;
            if(x==x0||y==y0)cout << "divisa\n";
            else if(x>x0&&y>y0)cout << "NE\n";
            else if(x<x0&&y>y0)cout << "NO\n";
            else if(x<x0&&y<y0)cout << "SO\n";
            else if(x>x0&&y<y0)cout << "SE\n";
        }
    }
    return 0;
}
