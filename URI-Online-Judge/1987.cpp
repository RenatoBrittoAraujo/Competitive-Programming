#include <iostream>

using namespace std;

int main()
{
    int t,s;
    string n;
    while(cin>>t>>n,!cin.eof()){
        s=0;
        for(int i=0;i<t;i++){
            s+=(int)n[i]-48;
        }
        bool ed;
        if(s%3==0)ed=true;
        else ed = false;
        cout << s << " ";
        if(ed)cout << "sim";
        else cout << "nao";
        cout << endl;
    }
    return 0;
}
