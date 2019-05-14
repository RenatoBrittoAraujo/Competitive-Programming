#include <iostream>

using namespace std;

int main(){
    string a[3];
    for(int i=0;i<3;i++)getline(cin,a[i]);
    int c=0;
    for(int i=0;i<4;i++){
        c=i;
        for(int j=0;j<3;j++){
            if(c==3)c=0;
            if(i==3)cout<<a[c].substr(0,10);
            else cout<<a[c];
            c++;
        }
        cout<<endl;
    }
    return 0;
}
