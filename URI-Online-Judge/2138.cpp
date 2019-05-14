#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int d[10];
    while(cin>>a,!cin.eof()){
        memset(d,0,sizeof d);
        for(int i=0;i<a.size();i++){
            int v=(int)a[i]-48;
            d[v]++;
        }
        int v=0,r=0;
        for(int i=0;i<10;i++){
            if(i==0||d[i]>=r){
                v=i;
                r=d[i];
            }
        }
        cout<<v<<endl;
    }
    return 0;
}
