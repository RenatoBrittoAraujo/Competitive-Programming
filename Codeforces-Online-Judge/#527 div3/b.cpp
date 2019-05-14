#include<bits/stdc++.h>

using namespace std;

vector<int> hab;

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){cin>>x;hab.push_back(x);}
    sort(hab.begin(),hab.end());
    int s=0;
    for(int i=0;i<n;i+=2){
        s+=abs(hab[i]-hab[i+1]);
    }
    cout<<s<<endl;
    return 0;
}