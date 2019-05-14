#include <bits/stdc++.h>

using namespace std;

int ar[5010]={0};

vector<int> ans;

int main(){
    int n,k,x;
    cin>>n>>k;
    bool pos=1;
    if(k>n)pos=0;
    int mxk=1;
    for(int i=0;i<n;i++){
        cin>>x;
        ar[x]++;
        if(ar[x]>k)pos=0;
        else{
            ans.push_back(ar[x]);
            if(ar[x]>mxk)mxk=ar[x];
        }
    }
    if(pos&&mxk<k){
        int fxd=0;
        int v = mxk;
        for(int i=0;i<ans.size();i++){
            if(fxd==k-mxk+1)break;
            ans[i]=v++;
            fxd++;
        }
    }
    if(!pos)cout<<"NO";
    else{cout<<"YES\n";for(int i=0;i<ans.size();i++){cout<<ans[i];if(i!=ans.size()-1)cout<<" ";}}
    cout<<endl;
    return 0;
}