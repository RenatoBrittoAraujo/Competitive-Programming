#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a,b;
        cin>>a>>b;
        int t1=a.size();
        int t2=b.size();
        bool enc=true;
        if(t2>t1)enc=false;
        else{
            for(int i=t1-1;i>=t1-t2;i--){
                //cout<<"i="<<i<<endl;
                if(a[i]!=b[i-t1+t2]){enc=false;break;}
            }
        }
        if(enc)cout<<"encaixa\n";
        else cout<<"nao encaixa\n";
    }
    return 0;
}
