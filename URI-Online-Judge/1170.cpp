#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int d=0;
        float s;
        cin>>s;
        while(s>1){
            s/=2;
            d++;
        }
        cout<<d <<" dias"<<endl;
    }
    return 0;
}
