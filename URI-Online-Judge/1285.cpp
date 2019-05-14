#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b,!cin.eof()){
        int s=0;
        for(int i=a;i<=b;i++){
            string a = to_string(i);
            bool tr=true;
            for(int j=0;j<a.size();j++){
                for(int k=j+1;k<a.size();k++){
                    if(a[j]==a[k]){tr=false;break;}
                }
                if(!tr)break;
            }
            if(tr)s++;
        }
        cout << s<< endl;
    }
    return 0;
}
