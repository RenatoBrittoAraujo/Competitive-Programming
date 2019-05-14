#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0;
    int o=0;
    while(s!=n){
        int f=1;
        int m=2;
        while(f<=n-s){
            f*=m;
            m++;
        }
        m--;
        f/=m;
        s+=f;
        o++;
    }
    cout << o << endl;
    return 0;
}
