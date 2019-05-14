#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d,bool(a+b+c+d)){
        int r=1080;
		r+=(a-b)>0?(a-b)*9:(a-b+40)*9;
		r+=(c-b)>0?(c-a)* 9:(c-b+40)*9;
		r+=(c-d)>0?(c-d)*9:(c-d+40)*9;
		cout<<r<<endl;
    }
    return 0;
}
