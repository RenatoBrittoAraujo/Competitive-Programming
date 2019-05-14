#include <bits/stdc++.h>

using namespace std;

int main()
{
   int c;
   cin>>c;
   while(c--){
        int da,a1,a2;
        int l1,l2,dl;
        cin>>a1>>l1>>a2>>l2;
        da=abs(a2-a1);
        dl=abs(l2-l1);
        float t = float(dl)/float(da);
        string a = to_string(t);
        int pm;
        for(int i=0;i<a.size();i++)if(a[i]=='.'){a[i]=',';pm=i+3;break;}
        cout<<a.substr(0,pm)<<endl;
   }
    return 0;
}
