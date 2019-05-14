#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int s=0;
    cin >> a >> b;
    if(a>b){int t=a;a=b;b=t;}
    for(int i=a;i<=b;i++){
        if(!(i%13==0))s+=i;
    }
    cout << s << endl;
    return 0;
}
