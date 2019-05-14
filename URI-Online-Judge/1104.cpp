#include <iostream>

using namespace std;

int a[10000],b[10000];

int main()
{
    int c1,c2;
    while(cin>>c1>>c2,bool(c1+c2)){
        for(int i=0;i<c1;i++)cin >> a[i];
        for(int i=0;i<c2;i++)cin >> b[i];

        int ct1=0,ct2=0;

        for(int i=0;i<c1;i++){
            bool t=true;
            for(int j=0;j<i;j++){
                if(a[i]==a[j])t=false;
            }
            for(int j=0;j<c2;j++){
                if(b[j]>a[i])break;
                if(b[j]==a[i])t=false;
            }
            if(t)ct1++;
        }

        for(int i=0;i<c2;i++){
            bool t=true;
            for(int j=0;j<i;j++){
                if(b[i]==b[j])t=false;
            }
            for(int j=0;j<c1;j++){
                if(a[j]>b[i])break;
                if(a[j]==b[i])t=false;
            }
            if(t)ct2++;
        }
        int s=min(ct1,ct2);
        cout << s << endl;
    }
    return 0;
}
