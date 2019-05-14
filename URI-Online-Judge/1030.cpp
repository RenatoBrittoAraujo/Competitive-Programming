#include <iostream>

using namespace std;

int main()
{
    int c,n,k;
    cin>>c;
    for(int i=1;i<=c;i++){
        cin >> n>> k;
        int v=0;
        for(int i=2;i<=n;i++){
            v=(v+k)%i;
        }
        cout << "Case "<<i<<": "<<v+1<< endl;
    }
    return 0;
}
