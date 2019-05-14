#include <iostream>

using namespace std;

int main()
{
    int m,d;
    while(cin>>m>>d,!cin.eof()){
        int ds=0;
        while(m<12){
            switch(m){
                case 1:case 3:case 5:case 7:case 8:case 10:
                ds+=31;
                break;
                case 2:
                ds+=29;
                break;
                default:
                ds+=30;
                break;
            }
            m++;
        }
        ds+=25-d;
        if(ds==1)cout<<"E vespera de natal!\n";
        else if(ds==0)cout <<"E natal!\n";
        else if(ds<0)cout << "Ja passou!\n";
        else cout << "Faltam "<<ds<<" dias para o natal!\n";
    }
    return 0;
}
