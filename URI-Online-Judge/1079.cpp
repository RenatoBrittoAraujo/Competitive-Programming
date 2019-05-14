#include <iostream>

using namespace std;

int main()
{
    int n;
    float s,x;
    cin >> n;
    for(int i=0;i<n;i++){
        s=0;
        cin >> x;
        s+=x*2;
        cin >> x;
        s+=x*3;
        cin >> x;
        s+=x*5;
        printf("%.1f\n",s/10);
    }
    return 0;

}
