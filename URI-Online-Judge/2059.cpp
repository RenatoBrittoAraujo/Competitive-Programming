#include <iostream>

using namespace std;

int main()
{
    int p,j1,j2,r,a;
    cin >> p >> j1 >> j2 >> r >> a;
    int v;int s = j1+j2;
    if(r&&a)v=2;
    else if(r&&!a)v=1;
    else if(!r&&a)v=1;
    else if(s%2==0&&p==1)v=1;
    else if(s%2!=0&&p==0)v=1;
    else v=2;
    cout << "Jogador " << v << " ganha!\n";
    return 0;
}
