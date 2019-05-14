#include <iostream>

using namespace std;

int main()
{
    int n,val1=0,val2=1;
    cin >> n;
    for(int i=0;i<n;i++){
        if(i%2==0){

            cout << val1;
            val1+=val2;
        }else{

            cout << val2;
            val2+=val1;
        }
        if(i!=n-1)cout << " ";
    }
    cout << "\n";
    return 0;
}
