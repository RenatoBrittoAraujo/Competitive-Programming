#include <iostream>

using namespace std;

int main()
{
    int p;
    cin>>p;
    string a[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
        int t = a[i].size();
        if(t==3){
            if(a[i][0]=='O'&&a[i][1]=='B')a[i]="OBI";
            if(a[i][0]=='U'&&a[i][1]=='R')a[i]="URI";
        }
    }
    for(int i=0;i<p;i++){
        cout<<a[i];
        if(i!=p-1)cout<<" ";
    }cout<<endl;
    return 0;
}
