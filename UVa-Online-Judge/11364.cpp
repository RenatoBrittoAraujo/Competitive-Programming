#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n,ma=0,mi=1000000,x;
        cin>>n;
        while(n--){cin>>x;if(x>ma)ma=x;if(x<mi)mi=x;}
        cout<<(ma-mi)*2<<endl;
    }
    return 0;
}
