#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int x,y;
        int nv=0;
        for(int i=0;i<n;i++){
            cin >> x >> y;
            if(y%2!=0)y--;
            nv+=y;
        }
        cout << nv/4 << endl;
    }
    return 0;
}

