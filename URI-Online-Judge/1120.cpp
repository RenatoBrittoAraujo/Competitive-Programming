#include <iostream>

using namespace std;

int main()
{
    char n;
    string v;
    while(cin>>n>>v,!(n=='0'&&v.size()==1&&v[0]=='0')){
        bool pnv=false;
        string r;
        int t=v.size();
        for(int i=0;i<t;i++){
            if(v[i]!=n){
                if(v[i]!='0'||(v[i]=='0'&&pnv)){r+=v[i];pnv=true;}
            }
        }
        if(r.empty())r+='0';
        if(!pnv)cout << "0\n";
        else cout << r << endl;
    }
    return 0;
}
