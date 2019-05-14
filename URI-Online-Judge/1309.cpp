#include <iostream>

using namespace std;

int main()
{
    string a;
    int b;
    while(cin>>a>>b,!cin.eof()){
        cout<<"$";
        int r = a.size()%3;
        for(int i=0;i<a.size();i++){
            if(i>0&&(i-r)%3==0)cout<<",";
            cout<<a[i];
        }
        cout<<".";
        printf("%.2d\n",b);
    }
    return 0;
}
