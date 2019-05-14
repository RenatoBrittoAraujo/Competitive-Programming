#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a,b;
        cin>>a>>b;
        int ta=a.size();
        int tb=b.size();
        bool enc=true;
        int sb=0;
        for(int i=ta-tb;i<ta;i++){
            if(a[i]!=b[sb])enc=false;
            sb++;
        }
        if(enc)cout<<"encaixa\n";
        else cout << "nao encaixa\n";
    }
    return 0;
}
