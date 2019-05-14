#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int tl=0,x,an;
        for(int i=0;i<n;i++){
            cin>>x;
            if(i>0&&x-an<10)tl+=x-an;
            else tl+=10;
            an=x;
        }
        cout<<tl<<endl;
    }
    return 0;
}
