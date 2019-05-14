#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int x;
        int s1,s2,i1,i2;
        int s[n];
        for(int i=0;i<n;i++){
            cin >> s[i];
            if(i==0){s1=s[i];i1=i;}
            else{
                if(s[i]>s1){s1=s[i];i1=i;}
            }
        }
        s2=0;
        for(int i=0;i<n;i++){
                if(s[i]<s1&&s[i]>s2){s2=s[i];i2=i;}
        }
        cout << i2+1 << endl;
    }
    return 0;
}
