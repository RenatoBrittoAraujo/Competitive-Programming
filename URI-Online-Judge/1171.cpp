#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2]={0};
    int v=0,x;
    for(int j=0;j<n;j++){
        cin>>x;
        bool t=false;int va;
        for(int i=0;i<n;i++){
            if(a[i][0]==x){t=true;va=i;}
        }
        if(t){
            a[va][1]++;
        }else{
            a[v][0]=x;
            a[v][1]++;
            v++;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=i+1;j<v;j++){
            if(a[i][0]>a[j][0]){
                int t1=a[i][0];
                int t2=a[i][1];
                a[i][0]=a[j][0];
                a[i][1]=a[j][1];
                a[j][0]=t1;
                a[j][1]=t2;
            }
        }
    }
    for(int i=0;i<v;i++){
        cout << a[i][0] << " aparece " << a[i][1] << " vez(es)\n";
    }
    return 0;
}
