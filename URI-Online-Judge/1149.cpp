#include <iostream>

using namespace std;

int main()
{
    int a,n;
    cin >> a;
    while(1){
        cin >> n;
        if(!(n<1))break;
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=a+i;
    }
    cout << s << endl;
    return 0;
}
