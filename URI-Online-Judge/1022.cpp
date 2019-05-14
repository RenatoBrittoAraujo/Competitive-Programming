#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c,d;
    int ca;
    cin>>ca;
    cin.ignore();
    while(ca--){
        char ch;
        string x,y;
        getline(cin,x);
        int i=0;
        for(int j=0;j<4;j++){
            y.clear();
            while(!(i>x.size()-1)&&x[i]!=' '){
                y+=x[i];
                i++;
                }
            if(j==0)a=stoi(y);
            if(j==1)b=stoi(y);
            if(j==2)c=stoi(y);
            if(j==3)d=stoi(y);
            i+=3;
        }
        int se=5;
        while(1){
            if(x[se]=='+'||x[se]=='-'||x[se]=='*'||x[se]=='/'){ch=x[se];break;}
            se++;
        }
        int r[4];
        if(ch=='+'){
            r[1]=b*d;
            int c1=r[1]/b;
            c1*=a;
            int c2=r[1]/d;
            c2=c2*c;
            r[0]=c1+c2;
        }else if(ch=='-'){
            r[1]=b*d;
            int c1=r[1]/b;
            c1*=a;
            int c2=r[1]/d;
            c2=c2*c;
            r[0]=c1-c2;
        }else if(ch=='*'){
            r[1]=b*d;
            r[0]=a*c;
        }else{
            r[1]=b*c;
            r[0]=a*d;
        }
        int di = sqrt(min(abs(r[0]),r[1]))+1;
        //cout<<"di="<<di<<endl;
        bool mz;
        if(r[0]>=0)mz=true;
        else mz=false;
        r[2]=abs(r[0]);
        r[3]=r[1];
        while(1){
            bool vi=false;
            for(int i=2;i<=di;i++){
                //cout << bool(r[2]%i==0) << " "<< bool(r[3]%i==0) << endl;
                if(r[2]%i==0&&r[3]%i==0){
                    //cout<<"FOI\n";
                    r[2]/=i;
                    r[3]/=i;
                    vi=true;
                    break;
                }
            }
            if(!vi)break;
        }
        if(!mz)r[2]=-r[2];
        printf("%d/%d = %d/%d\n",r[0],r[1],r[2],r[3]);
    }
    return 0;
}
