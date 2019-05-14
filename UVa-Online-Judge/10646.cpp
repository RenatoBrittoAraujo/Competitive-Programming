#include <bits/stdc++.h>

using namespace std;

vector<string> ca;

int vc(string s){
    int v = int(s[0])-48;
    if(0<=v&&v<10)return v;
    else return 10;
}

int main(){
    int c,ci=1;
    cin>>c;
    while(c--){
        ca.clear();
        string s;
        for(int i=0;i<52;i++){cin>>s;ca.push_back(s);}
        reverse(ca.begin(),ca.end());
        int y=0;
        for(int i=0;i<3;i++){
            int v = vc(ca[25]);
            y+=v;
            for(int j=0;j<11-v;j++)ca.erase(ca.begin()+25);
        }
        cout<<"Case "<<ci<<": "<<ca[ca.size()-y]<<endl;ci++;
    }
    return 0;
}
