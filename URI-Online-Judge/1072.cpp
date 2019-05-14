#include <iostream>

using namespace std;

int main()
{
    int a,b=0,c=0,n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>=10&&a<=20){b++;}else{c++;}
    }
    cout << b <<" in\n" << c << " out\n";
    return 0;

}
