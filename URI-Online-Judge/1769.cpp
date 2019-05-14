#include <iostream>

using namespace std;

int main()
{
    string a;
    while(cin>>a,!cin.eof()){
        int pn=0;
        int m=1;
        for(int i=0;i<11;i++){
            if(i==3||i==7){i++;}
            pn+=(int(a[i])-48)*m;
           //cout << "a["<<i<<"]="<<a[i]<<"*"<<m<<"->"<<pn<<endl;
            m++;
        }
        int u=9;
        m=9;
        for(int i=0;i<11;i++){
            if(i==3||i==7){i++;}
            int n=int(a[i])-48;
            if(i==0)n--;
            u+=n*m;
            //cout << "a["<<i<<"]="<<a[i]<<"*"<<m<<"->"<<u<<endl;
            m--;
        }
        pn=pn%11;
        if(pn==10)pn=0;
        u=u%11;
        if(u==10)u=0;
        //cout << pn << " " << u << "/" << a[12] << " " << a[13] << endl;
        if(u==int(a[13])-48&&pn==int(a[12])-48)cout << "CPF valido\n";
        else cout << "CPF invalido\n";
    }
    return 0;
}
