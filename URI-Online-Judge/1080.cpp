#include <iostream>

using namespace std;

int main()
{
    int v,p,l;
    for(int i=1;i<=100;i++){
        cin >> l;
        if(i==1){v=l;p=i;}
        if(l>v){v=l;p=i;}
    }
     cout << v << endl << p << endl;
    return 0;

}
