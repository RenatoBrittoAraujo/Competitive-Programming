#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int b[3]={a[0],a[1],a[2]};
    for(int i =0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(b[j]<b[i]){int t=b[i];b[i]=b[j];b[j]=t;}
        }
    }
    for(int i=0;i<3;i++){
        cout << b[i] << endl;
    }
    cout << "\n";
    for(int i=0;i<3;i++){
        cout << a[i] << endl;
    }
    return 0;
}
