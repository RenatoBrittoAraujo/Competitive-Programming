#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;
    int h,m,a;
    while(n--,n){
        cin >> h >> m >> a;
        if(a)printf("%.2d:%.2d - A porta abriu!\n",h,m);
        else printf("%.2d:%.2d - A porta fechou!\n",h,m);
    }
    return 0;
}
