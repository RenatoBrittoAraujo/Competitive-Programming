#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    while(n--){
        cin>>x>>y;
        int a=(x*y)/2;
        cout << a << " cm2" << endl;
    }
    return 0;
}
