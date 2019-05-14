#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    cin>>c;
    string t;
    cin.ignore();
    getline(cin,t);
    int p=0,pal=1;
    bool e=false;
    for(int i=0;i<t.size();i++){
        if(t[i]==c&&!e){
            p++;
            e=true;
        }
        if(t[i]==' '){e=false;pal++;}
    }
    float por = float(p)/float(pal);
    por*=100;
    printf("%.1f\n",por);
    return 0;
}
