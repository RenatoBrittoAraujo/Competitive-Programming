#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>85)cout<<"A\n";
    else if(n>60)cout << "B\n";
    else if(n>35)cout << "C\n";
    else if(n>0)cout << "D\n";
    else cout << "E\n";
    return 0;
}
