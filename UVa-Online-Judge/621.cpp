#include <iostream>

using namespace std;

int main()
{
    string a;
    int c;
    cin>>c;
    while(c--){
        cin>>a;
        if(a.size()==1&&(a[0]=='1'||a[0]=='4'))cout<<'+'<<endl;
        else if(a.substr(a.size()-2,2)=="35")cout<<"-\n";
        else if(a[0]=='9'&&a[a.size()-1]=='4')cout<<'*'<<endl;
        else if(a.size()>3&&stoi(a.substr(0,3))==190)cout<<"?\n";
        else cout<<"+\n";
    }
    return 0;
}
