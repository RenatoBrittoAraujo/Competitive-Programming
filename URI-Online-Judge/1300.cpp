#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        int ah=0;
        int am=0;
        bool c=false;
        for(int i=1;i<=12;i++){
            for(int j=1;j<=60;j++){
                if(abs(ah-am)==n){c=true;break;}
                if(j%12==0&&j>=12)ah+=30;
                am+=6;
            }
            if(c)break;
            am=0;
        }
        if(c)cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}

