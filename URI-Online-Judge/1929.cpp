#include <iostream>
using namespace std;

int main()
{
    int a[4];
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    bool da=false;
    for(int i=0;i<4;i++){
        for(int j =0;j<4;j++){
            for(int z=0;z<4;z++){
                if(a[i]<a[z]&&a[j]<a[z]&&a[z]<a[i]+a[j]&&i!=j&&j!=z&&z!=i){da=true;}
            }
        }
    }
    if(da){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
