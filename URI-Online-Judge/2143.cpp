#include <iostream>

using namespace std;

int main()
{
    int n,x;
    while(cin>>n,n!=0){
        for(int i=0;i<n;i++){
            cin >> x;
            if(x%2==0){
                x=(x-1)*2;
            }else{
                x=x*2-1;
            }
            cout << x << endl;
        }
    }
    return 0;
}
