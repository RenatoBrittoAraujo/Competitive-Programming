#include <iostream>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    if(b.size()<a.size()){
        string t = a;
        a=b;
        b=t;
    }
    bool pa=true;
    for(int i=0;i<a.size();i++){
        int c1 = (int)a[i]-97;
        int c2 = (int)b[i]-97;
        if(c1>c2){pa=false;break;}
        else if(c2>c1){break;}
    }
    if(pa)cout<<a<<endl<<b<<endl;
    else cout<<b<<endl<<a<<endl;
    return 0;
}
