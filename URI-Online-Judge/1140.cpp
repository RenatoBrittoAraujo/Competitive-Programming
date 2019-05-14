#include <iostream>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s),!(s[0]=='*'&&s.size()==1)){
        int t = s.size();
        bool tauto=true;
        char l=s[0];
        for(int i=0;i<t;i++){
            if(s[i]==' '){
                if(s[i+1]!=tolower(l)&&s[i+1]!=toupper(l))tauto=false;
            }
        }
        if(tauto)cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}
