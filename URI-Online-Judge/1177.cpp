#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v=0;
    for(int i=0;i<1000;i++){
        cout << "N["<<i<<"] = "<<v<<endl;
        v++;if(v==n)v-=n;
    }
}
