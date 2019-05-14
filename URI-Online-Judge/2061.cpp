#include <iostream>

using namespace std;

int main()
{
    int n,a;string b;
    cin >> n >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        if(b=="fechou"){
            n++;
        }else{
            n--;
        }
    }
    cout << n << endl;
    return 0;
}
