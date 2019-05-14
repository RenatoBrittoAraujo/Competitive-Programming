#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int k=1;k<=c;k++){
        int n;
        cin>>n;
        int id[n];
        int me,ma;
        for(int i=0;i<n;i++)cin>>id[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(id[i]>id[j]){
                    int t=id[i];
                    id[i]=id[j];
                    id[j]=t;
                }
            }
        }
        cout<<"Case "<<k<<": "<<id[n/2]<<endl;
    }

    return 0;
}
