#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int m,b,v;
    for(int i=1;i<=a;i++){
        cin >> b;
        if(i==1||b<v){v=b;m=i;};
    }
    cout << m << endl;
    return 0;
}
