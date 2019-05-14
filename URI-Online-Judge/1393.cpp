#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        //fibonnacci caraiooooooooooo
        n--;
        int a=1;
        int b=0;
        int s=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                b+=a;
            }else{
                a+=b;
            }
        }
        s=a+b;
        cout<<s<<endl;
    }
    return 0;
}
