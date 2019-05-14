#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    double mi = n/log(n);
    double ma = 1.25506*n/log(n);
    printf("%.1f %.1f\n",mi,ma);
    return 0;
}
