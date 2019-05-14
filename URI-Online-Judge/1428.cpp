#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int n,m;
    while(c--){
        cin>>n>>m;
        n-=2;m-=2;
        int nv,nh;
        if(n%3==0)nv=n/3;
        else nv=n/3+1;
        if(m%3==0)nh=m/3;
        else nh=m/3+1;
        cout << nh*nv << endl;
    }
    return 0;
}
