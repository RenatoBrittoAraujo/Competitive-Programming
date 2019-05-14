#include <iostream>

using namespace std;

int main()
{
    int n,d;
    while(cin>>n>>d,!cin.eof()){
        bool pi=false;
        string dia,di;
        int s,x;
        while(d--){
            cin >> dia;
            s=0;
            for(int i=0;i<n;i++){
                cin >> x;
                s+=x;
            }
            if(s==n&&!pi){
                di=dia;
                pi=true;
            }
        }
        if(!pi){
            cout << "Pizza antes de FdI\n";
        }else{
            cout << di << endl;
        }
    }
    return 0;
}
