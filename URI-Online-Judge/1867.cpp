#include <iostream>

using namespace std;

int get_a(string s1){
    int a1;
    do{
        int s=0;
        int t=s1.size();
        for(int i=0;i<t;i++)s+=(int)s1[i]-48;
        a1=s;
        s1=to_string(s);
    }while(a1>9);
    return a1;
}

int main()
{
    int a1,a2;
    string s1,s2;
    while(cin>>s1>>s2,!(s1[0]=='0'&&s2[0]=='0')){
        a1=get_a(s1);
        a2=get_a(s2);

    if(a1==a2)cout << "0\n";
    else if (a1>a2)cout << "1\n";
    else cout << "2\n";
    }
    return 0;
}
