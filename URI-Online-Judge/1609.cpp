#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int c,n,x;
    cin >> c;
    while(c--){
        cin>>n;
        vector<int> ca;
        for(int i=0;i<n;i++){
            cin >> x;
            if(i==0)ca.push_back(x);
            else{
                bool t=false;
                for(int i=0;i<ca.size();i++){
                    if(ca[i]==x){t=true;break;}
                }
                if(!t)ca.push_back(x);
            }
        }
        cout << ca.size() << endl;
    }
    return 0;
}

