#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int s=0;
    for(int i=0;i<5;i++){
        int b;
        cin >> b;
        if(b==t)s++;
    }
    cout << s << endl;
    return 0;
}
