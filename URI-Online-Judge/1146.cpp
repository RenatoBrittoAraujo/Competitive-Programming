#include <iostream>

using namespace std;

int main()
{
    int x;
    while(cin >> x,x){
        for(int i=1;i<=x;i++){
            cout << i;
            if(i!=x)cout << " ";
        }cout << "\n";
    }
    return 0;
}
