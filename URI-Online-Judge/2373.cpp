#include <iostream>

using namespace std;

int main(){
    int c;
    cin>>c;
    int s=0;
    while(c--){
        int a,b;
        cin>>a>>b;
        if(b<a)s+=b;
    }
    cout<<s<<endl;
    return 0;
}
