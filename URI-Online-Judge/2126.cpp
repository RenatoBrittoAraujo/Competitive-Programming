#include <iostream>

using namespace std;

int main()
{
    string s, sb;int ca=0;
    s.clear();sb.clear();
    while(s.clear(),sb.clear(),cin >> sb >> s,!cin.eof()){
        int ss=s.size(),ssb=sb.size();
        ca++;
        int pos,ns=0;
        for(int i=0;i<ss;i++){
            if(s[i]==sb[0]){
                bool tst=true;
                for(int j=0;j<ssb;j++){
                    if(s[i+j]!=sb[j]){tst=false;break;}
                }
                if(tst){
                    ns++;
                    pos=i+1;
                    i+=ssb-1;
                }
            }
        }
        cout << "Caso #"<<ca<<":"<<endl;
        if(ns>0){cout << "Qtd.Subsequencias: "<<ns<<endl<<"Pos: "<<pos<<endl<<endl;}
        else{cout << "Nao existe subsequencia\n\n";}
    }
    return 0;
}
