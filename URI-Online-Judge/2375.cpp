#include <iostream>

using namespace std;

int main()
{
    int d;
    cin>>d;
    int a,l,p;
    cin>>a>>l>>p;
    if(a<d||l<d||p<d)cout << "N\n";
    else cout << "S\n";

    return 0;
}

