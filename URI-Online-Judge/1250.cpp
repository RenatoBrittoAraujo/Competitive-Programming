#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        while(n--){
        int ti;
        cin>>ti;
        string r;
        int t[ti];
        for(int i=0;i<ti;i++){
            cin>>t[i];
        }
        cin>>r;
        int a=0;
        for(int i=0;i<ti;i++)
            if((r[i]=='J'&&t[i]>2)||(r[i]=='S'&&t[i]<3))a++;
        cout << a << endl;
        }
    }
    return 0;
}
