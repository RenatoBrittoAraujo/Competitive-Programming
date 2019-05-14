#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    cin.ignore();
    while(c--){
        string f;
        getline(cin,f);
        int t=f.size();
        bool us[26]={false};
        int s=0;
        for(int i=0;i<t;i++){
            int v = (int)f[i]-97;
            if(v>-1&&v<26&&us[v]==false){us[v]=true;s++;}
        }
        if(s==26)cout << "frase completa\n";
        else if(s>=13)cout << "frase quase completa\n";
        else cout << "frase mal elaborada\n";
    }
    return 0;
}
