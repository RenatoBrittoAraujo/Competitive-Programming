#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >>y;
    for(int i=1;i<=y;i+=x){
        for(int j=i;j<i+x;j++){
            cout << j;
            if(j!=i+x-1)cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
