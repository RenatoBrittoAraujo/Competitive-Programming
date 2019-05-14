#include <iostream>

using namespace std;

int main()
{
    string e;
    while(cin>>e,!cin.eof()){
        int t = e.size();
        if(t==1)cout<<"incorrect\n";
        else
        {
        int in=0;
        for(int i=0;i<t;i++)if(e[i]=='(')in++;
        int ab[in]={0};
        int n=0;
        bool co=true;
        for(int i=0;i<t;i++){
            if(e[i]=='('){
                ab[n]++;
                 //cout<<ab[n]<<endl;
                if(ab[n]>1){co=false;break;}
                n++;
            }
            if(e[i]==')'){
                n--;
                ab[n]--;
                //cout<<ab[n]<<endl;
                if(ab[n]<0){co=false;break;}
            }
        }
        if(n!=0)co=false;
        if(co)cout<<"correct\n";
        else cout << "incorrect\n";
        }
    }
    return 0;
}
