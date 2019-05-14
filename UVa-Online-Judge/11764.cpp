#include <iostream>

using namespace std;

int main()
{
    int c,ca=1;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        int l=-1,x,h=0,lo=0;
        while(n--){
            cin>>x;
            if(l==-1)l=x;
            else{
                if(x>l)h++;
                else if(x<l)lo++;
                l=x;
            }
        }
        cout<<"Case "<<ca<<": ";
        ca++;
        cout<<h<<" "<<lo<<endl;
    }
    return 0;
}
