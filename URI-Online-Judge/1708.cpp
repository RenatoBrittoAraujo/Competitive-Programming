#include <iostream>

using namespace std;

int main()
{
    int t1,t2,n;
    cin>>t1>>t2;

    n=1;
    while(n*t1>(n-1)*t2)n++;

    cout <<n<<endl;
    return 0;
}

