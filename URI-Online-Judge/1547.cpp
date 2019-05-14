#include <iostream>

using namespace std;

int main()
{
    int c,a,n;
    cin>>c;
    while(cin>>a>>n,c--){
        int x,v,cg;bool vi=false;
        for(int i=0;i<a;i++){
            cin>>x;
            if(!vi){
            if(x==n){v=i+1;vi=true;}
            int g = abs(n-x);
            if(i==0||g<cg){cg=g;v=i+1;}
            }
        }
        cout << v << endl;
    }
    return 0;
}
