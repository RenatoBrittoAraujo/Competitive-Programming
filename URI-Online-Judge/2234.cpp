#include <iostream>

using namespace std;

int cu[10000][60];

int main()
{
    int nc,np;
    cin >> nc>>np;
    float m = float(nc)/float(np);
    printf("%.2f\n",m);
    return 0;
}
