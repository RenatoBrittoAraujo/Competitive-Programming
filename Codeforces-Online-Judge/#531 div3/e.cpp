#include <bits/stdc++.h>

using namespace std;

bitset<200010> fd;
int arr[200010];
int n;
    long long int r = 1;
    int fdg=0;

int main(){
    cin>>n;
    fd[n-1]=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<i;k++){fd[k]=1;}
            }
        }
    }
    for(int i=0;i<n;i++)if(fd[i]==0)fdg++;
    for(int i=0;i<fdg;i++)r*=2;
    printf("%I64d\n",r);
    return 0;
}