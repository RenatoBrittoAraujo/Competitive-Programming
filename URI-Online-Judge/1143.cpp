#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=1;
    for(int i=0;i<n;i++){
        cout << a << " ";
        cout << a*a<< " ";
        cout << a*a*a<< "\n";
        a++;
    }
    return 0;
}
