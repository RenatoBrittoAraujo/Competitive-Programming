#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p=0;
    while(cin>>n,n){
        if(p!=0)cout<<endl;
        p=1;
        bool ps=0;
        for(int f = 1234; f<=98765/n; f++){
            int a = f*n;
            int temp, used = (f<10000);
            temp = a;
            while(temp){used |= 1 << (temp%10);temp/=10;}
            temp = f;
            while(temp){used |= 1 << (temp%10);temp/=10;}
            if(used == (1<<10)-1){printf("%0.5d / %0.5d = %d\n",a,f,n);ps=1;}
        }
        if(!ps)cout<<"There are no solutions for "<<n<<".\n";
    }
    return 0;
}
