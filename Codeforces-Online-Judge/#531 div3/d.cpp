#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    string s;
    cin>>n>>s;
    int arr[3]={0};
    for(int i=0;i<n;i++)arr[s[i]-48]++;
    //cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    bool ed=0;
    for(int i1=0;i1<3;i1++)for(int i2=2;i2>=0;i2--)if(i1!=i2){
        if(i1==2&&i2==1&&!ed)i2=0;
        if(arr[i1]>n/3&&arr[i2]<n/3){
            //cout<<i1<<" "<<i2<<endl;
            if(i2>i1){
                for(int i=n-1;i>=0;i--)
                    if(arr[i1]==n/3||arr[i2]==n/3)break;
                    else if(s[i]==i1+48){s[i]=char(i2+48);arr[i1]--;arr[i2]++;}
            }else{
                //cout<<"A"<<endl;
                for(int i=0;i<n;i++)
                    if(arr[i1]==n/3||arr[i2]==n/3)break;
                    else if(s[i]==i1+48){s[i]=char(i2+48);arr[i1]--;arr[i2]++;}//cout<<"B\n";}
            }
        }
        if(ed)break;
        if(i1==2&&i2==0){i2=2;ed=1;}
    }
    cout<<s<<endl;
    return 0;
}