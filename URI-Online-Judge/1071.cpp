#include <iostream>

using namespace std;

int main()
{
    int a,b,s=0;
    cin >> a >> b;
    if(a<b){int t=a;a=b;b=t;}
    for(int i=b+1;i<a;i++){
        if(a==b)break;
        if(i%2==1||i%2==-1){s+=i;}
    }
    cout << s << endl;
    return 0;

}
