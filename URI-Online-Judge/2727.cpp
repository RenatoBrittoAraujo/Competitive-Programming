#include <iostream>

using namespace std;

int main(){
    int c;
    while(cin>>c,!cin.eof()){
        cin.ignore();
        while(c--){
            int b=0;
            string a;
            getline(cin,a);
            for(int i=0;i<a.size();i++){if(a[i]==' ')b++;}
            int i=0;
            while(i<a.size()&&a[i]!=' '){i++;}
            cout<<char(b*3+i+96)<<endl;
        }
    }
    return 0;
}
