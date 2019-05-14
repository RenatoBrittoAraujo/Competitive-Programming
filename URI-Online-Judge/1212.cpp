#include <iostream>

using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b,!(a[0]=='0'&&b[0]=='0')){
        int nc=0,vg=0;
        int t1=a.size();
        int t2=b.size();
        string t;
        if(t1>t2){
            for(int i=0;i<t1-t2;i++)t+='0';
            t+=b;
            b=t;
        }else if(t2>t1){
            for(int i=0;i<t2-t1;i++)t+='0';
            t+=a;
            a=t;
        }
        for(int i=a.size()-1;i>-1;i--){
            int v1 = int(a[i])-48;
            int v2 = int(b[i])-48;
            if(v1+v2+vg>9){
                nc++;
            }
            //cout<<v1<<"+"<<v2<<"+"<<vg<<" vg="<<(v1+v2+vg)/10<<endl;
            vg=(v1+v2+vg)/10;
        }
        if(nc==0)cout<<"No carry operation.\n";
        else if(nc==1)cout<<"1 carry operation.\n";
        else cout<<nc<<" carry operations.\n";
    }
    return 0;
}
