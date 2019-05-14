#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int c[n]={0};
        int p=0;
        int v=2;
        int t=n;
        cout<< "Discarded cards: ";
        while(t>1){
            //cout<<"A";
            while(v!=2){
                //cout<<p<<endl;
                p++;
                if(p==n)p=0;
                if(c[p]==0)v++;

            }
            if(t>1)cout<<p+1;
            if(t>2)cout<<", ";
            c[p]=1;
            //cout<<"L>";
            //for(int i=0;i<n;i++){cout<<c[i]<<" ";}
            //cout<<endl;
            t--;
            v=0;
        }
        p=0;
        while(c[p]!=0)p++;
        cout<<endl<<"Remaining card: "<<p+1<<endl;
    }
    return 0;
}
