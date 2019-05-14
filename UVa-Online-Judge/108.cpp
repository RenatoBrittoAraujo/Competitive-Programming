#include <bits/stdc++.h>

using namespace std;

int arr[110][110];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if (i>0)arr[i][j]+=arr[i-1][j];
			if (j>0)arr[i][j]+=arr[i][j-1];
			if (i>0&&j>0)arr[i][j]-=arr[i-1][j-1];
        }
    int ms=-99999999;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++){
        for(int k=i;k<n;k++)for(int l=j;l<n;l++){
                int s=arr[k][l];
                if (i>0)s-=arr[i-1][l];
                if (j>0)s-=arr[k][j-1];
                if (i>0&&j>0)s+=arr[i-1][j-1];
                if (ms<s){ms=s;}
            }
    }
    cout<<ms<<endl;
    return 0;
}
