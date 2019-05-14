#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==0)n=1;
    int m=1;
    for(int i=1;i<=n;i++){
        m*=i;
    }
    cout << m << endl;

    return 0;
}
