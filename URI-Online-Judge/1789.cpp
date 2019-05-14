#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int l;
    while(cin >> l,!cin.eof()){
        int val,vl;
        for(int i=0;i<l;i++){
            cin>>val;
            if(i==0)vl=val;
            vl=max(vl,val);
        }
        if(vl>=20)
            printf("3\n");
        else if(vl>=10)
            printf("2\n");
        else printf("1\n");
        }
    return 0;
}
