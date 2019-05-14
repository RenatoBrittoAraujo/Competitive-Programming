#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n,!cin.eof()){
        stack<int> s;
        queue<int> q;
        priority_queue<int> p;
        bool sv[3]={0};
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a==1){
                s.push(b);
                q.push(b);
                p.push(b);
            }else{
                if(s.size()==0)sv[0]=1;
                if(q.size()==0)sv[1]=1;
                if(p.size()==0)sv[2]=1;
                if(!sv[0])if(s.top()!=b)sv[0]=1;
                if(!sv[1])if(q.front()!=b)sv[1]=1;
                if(!sv[2])if(p.top()!=b)sv[2]=1;
                s.pop();q.pop();p.pop();
            }
        }
        int so=0;
        for(int i=0;i<3;i++)so+=sv[i];
        if(so<2)cout<<"not sure\n";
        else if(so>2)cout<<"impossible\n";
        else{
            if(!sv[0])cout<<"stack\n";
            else if(!sv[1])cout<<"queue\n";
            else cout<<"priority queue\n";
        }

    }
    return 0;
}
