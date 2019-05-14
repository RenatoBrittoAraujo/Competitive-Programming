#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a,b;
        cin>>a>>b;
        string c;
        int as=a.size();
        int bs=b.size();
        int ca=0,cb=0;
        int t = as+bs;
        for(int i=0;i<t;i++){
            char e;
            if(i%2==0&&ca<as){e=a[ca];ca++;}
            else if(i%2!=0&&cb<bs){e=b[cb];cb++;}
            else if(ca==as){e=b[cb];cb++;}
            else {e=a[ca];ca++;}
            c+=e;
        }
        cout << c << endl;
    }
    return 0;
}
