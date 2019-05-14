#include <bits/stdc++.h>

using namespace std;

bool tro(char c,char c1,char c2){
    if(c=='y'&&c2=='y'&&c1=='+')return 1;
    else if(c=='z'&&c2=='z'&&c1=='+')return 1;
    else if(c=='x'&&c1=='-')return 1;
    else return 0;
}

int main(){
    int n;
    string s;
    while(cin>>n,n){
        bool f=1;
        char c='x';
        for(int i=0;i<n-1;i++){
            cin>>s;
            if(s=="No")continue;
            if(tro(c,s[0],s[1]))f=!f;
            if(c=='x')c=s[1];
            else if(c=='z'&&s[1]=='z')c='x';
            else if(c=='y'&&s[1]=='y')c='x';
        }
        cout<<(f?'+':'-')<<c<<endl;
    }
    return 0;

}
