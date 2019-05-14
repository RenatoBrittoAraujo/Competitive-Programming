#include <bits/stdc++.h>

using namespace std;

map<string, string> v;

int main()
{
    v["HELLO"]="ENGLISH";
    v["HOLA"]="SPANISH";
    v["HALLO"]="GERMAN";
    v["BONJOUR"]="FRENCH";
    v["CIAO"]="ITALIAN";
    v["ZDRAVSTVUJTE"]="RUSSIAN";
    string a;int c=1;
    while(getline(cin,a),a[0]!='#'){
        cout<<"Case "<<c<<": ";
        if(v.find(a)!=v.end())cout<<v[a]<<endl;
        else cout<<"UNKNOWN\n";
    }
    return 0;
}
