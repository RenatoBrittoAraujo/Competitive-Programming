#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int dd=a*d+c*b;
    int dv=b*d;
    int tm;
    bool e=true;
    while(e){
        e=false;
        tm=sqrt(max(dv,dd))+1;
        for(int i=2;i<=tm;i++){
            if(dd%i==0&&dv%i==0){
                dd/=i;
                dv/=i;
                e=true;
                continue;
            }
        }
    }
    cout<<dd<<" "<<dv<<endl;
    return 0;
}

