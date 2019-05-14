#include <iostream>

using namespace std;

int main(){
    int n;
    int t=1;
    int v[]={50,10,5,1};
    while(cin>>n,n){
        int r[4]={0};
        for(int i=0;i<4;i++){
            while(n>=v[i]){
                n-=v[i];
                r[i]++;
            }
        }
        cout<<"Teste "<<t<<endl;
        for(int i=0;i<4;i++){
            cout<<r[i];
            if(i!=3)cout<<" ";
        }
        cout<<endl<<endl;
        t++;
    }
    return 0;
}
