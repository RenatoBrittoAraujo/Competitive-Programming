#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        string a[n],b;
        vector<string> no;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b;
            int tf=b.size();
            int v=0;
            int ta=tf;
            for(int j=0;j<ta;j++){
                if(b[j]=='P')v++;
                if(b[j]=='M')tf--;
            }
            float fm=0.75;
            float f;
            if(tf==0)f=1;
            else f=float(v)/float(tf);
            if(!(f>=fm))no.push_back(a[i]);
        }
        int p = no.size();
        for(int i=0;i<p;i++){
            cout<<no[i];
            if(i!=p-1)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
