#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos,val,v;
    for(int i=0;i<n;i++){
        cin >> v;
        if(i==0||v<val){val=v;pos=i;}
    }
    cout << "Menor valor: "<< val << "\nPosicao: "<<pos<<endl;
}
