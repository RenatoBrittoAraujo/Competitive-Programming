#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    getline(cin,a);
    int pa[2],pn[2];
    pa[0]=(int)a[0]-96;
    pa[1]=(int)a[1]-48;
    pn[0]=(int)a[3]-96;
    pn[1]=(int)a[4]-48;
    int da=abs(pa[0]-pn[0]);
    int db=abs(pa[1]-pn[1]);
    if((da==1&&db==2)||(da==2&&db==1))cout<<"VALIDO\n";
    else cout<<"INVALIDO\n";
    return 0;
}
