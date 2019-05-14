#include <iostream>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a),!cin.eof()){
        bool ma=true;
        int t=a.size();
        for(int i=0;i<t;i++){
            if(a[i]!=' '){
                if(ma){a[i]=toupper(a[i]);ma=false;}
                else {a[i]=tolower(a[i]);ma=true;}
            }
        }
        cout << a<< endl;
    }
    return 0;
}
