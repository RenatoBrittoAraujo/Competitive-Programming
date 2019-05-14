#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        int s=0;
        if(y>x){int t=x;x=y;y=t;}
        for(int j=y+1;j<x;j++){
            if(x==y)break;
            if(j%2==1||j%2==-1)s+=j;
        }
        cout << s << endl;
    }

    return 0;

}
