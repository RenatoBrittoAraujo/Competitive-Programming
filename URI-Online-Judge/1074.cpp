#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin >> n;
    string b;
    for(int i=0;i<n;i++){
        b.clear();
        cin >> a;
        if(a==0){
            b+="NULL";
        }else{
            if(a%2==0){
                b+="EVEN ";
            }else{
                b+="ODD ";
            }
            if(a>0){
                b+="POSITIVE";
            }else{
                b+="NEGATIVE";
            }
        }
        cout << b << endl;
    }
    return 0;

}
