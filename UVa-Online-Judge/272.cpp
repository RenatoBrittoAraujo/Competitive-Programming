#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    bool l=1;
    while(getline(cin,a),!cin.eof()){
        string r;
        for(int i=0;i<a.size();i++){
            if(a[i]=='"'){
                if(l){r+="``";l=0;}
                else {r+="''";l=1;}
            }
            else r+=a[i];
        }
        cout<<r<<endl;
    }
    return 0;
}
