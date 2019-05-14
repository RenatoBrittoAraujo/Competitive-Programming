#include <iostream>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a),!cin.eof()){
        int t = a.size();
        int al=0;
        char ag=tolower(a[0]);
        int s=1;
        for(int i=1;i<t;i++){
            a[i]=tolower(a[i]);
            if(a[i]==ag&&a[i-1]==' '){s++;}//cout << ag << "++" <<endl;}
            if((a[i]!=ag&&a[i-1]==' ')||i==t-1){
                if(s>1)al++;
                s=1;
                //cout << ag << endl;
                ag=a[i];
            }
        }
        cout << al << endl;
    }
    return 0;
}
