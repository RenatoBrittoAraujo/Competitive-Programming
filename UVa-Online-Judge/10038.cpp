#include <bits/stdc++.h>

using namespace std;

vector<int> val;

int main(){
    int n;
    while(cin>>n,!cin.eof()){
        bool v=1;
        int x,l;
        if(n==1){cin>>x;cout<<"Jolly\n";continue;}
        cin>>l;
        cin>>x;
        val.push_back(abs(l-x));
        l=x;
        if(n>2){
            for(int i=2;i<n;i++){
                cin>>x;
                val.push_back(abs(l-x));
                l=x;
            }
        }
        sort(val.begin(),val.end());
        for(int i=1;i<n;i++){
            if(val[i-1]!=i){v=0;break;}
        }
        if(v)cout<<"Jolly\n";
        else cout<<"Not jolly\n";
        val.clear();
    }
    return 0;
}
