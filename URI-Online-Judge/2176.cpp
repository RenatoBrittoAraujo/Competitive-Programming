#include <iostream>

using namespace std;

int main()
{
    string b;
    cin >> b;
    int s=0;
    for(int i=0;i<b.size();i++){
        if(b[i]=='1')s++;
    }
    if(s%2==0){
        b+='0';
    }else{
        b+='1';
    }
    cout << b << endl;
    return 0;
}
