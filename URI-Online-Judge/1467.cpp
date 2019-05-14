#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c,!cin.eof()){
        int s=a+b+c;
        if(s==1){
            if(a==1)cout << "A\n";
            if(b==1)cout << "B\n";
            if(c==1)cout << "C\n";
        }else if(s==2){
            if(a==0)cout << "A\n";
            if(b==0)cout << "B\n";
            if(c==0)cout << "C\n";
        }else cout << "*" << endl;
    }
    return 0;
}
