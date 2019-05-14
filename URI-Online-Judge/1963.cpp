#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cin >> a>>b;
    c = (b-a)*100.00/a;
    printf("%.2f%%\n",c);
    return 0;
}

