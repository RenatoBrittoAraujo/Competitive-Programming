#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int a,x;
        cin>>a;
        priority_queue<int> p,n;
        while(a--){
            cin>>x;
            if(x>0)p.push(x);
            else if(x<0)n.push(abs(x));
        }
        int m=0;
        bool c;
        int aa;
        if(n.size()>0&&p.size()>0){
        if(p.top()>n.top()){aa=p.top();p.pop();c=false;m++;}
        else{aa=n.top();n.pop();c=true;m++;}
        while(!(p.size()>0&&c)||!(n.size()>0&&!c)){
            if(c){
                while(p.size()>0&&p.top()>aa){p.pop();}
                if(p.size()==0)break;
                aa=p.top();
                p.pop();
                m++;
                c=false;
            }else{
                while(n.size()>0&&n.top()>aa){n.pop();}
                if(n.size()==0)break;
                aa=n.top();
                n.pop();
                m++;
                c=true;
            }
        }}else m=bool(n.size())+bool(p.size());
        cout<<m<<endl;
    }
    return 0;
}
