#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        string s;
        cin>>s;
        int p=1;
        for(int i=0;i<s.size();i++){
            char v = tolower(s[i]);
            switch(v){
                case 'a':case 'e':case 'i':case 'o':case 's':
                    p*=3;
                    break;
                default:
                    p*=2;
                    break;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
