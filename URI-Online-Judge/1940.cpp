#include <iostream>

using namespace std;

int main()
{
    int j,r;
    cin>>j>>r;
    int p[j]={0},x;
    for(int i=0;i<r;i++){
        for(int k=0;k<j;k++){
            cin>>x;
            p[k]+=x;
        }
    }
    int ma;
    int jm;
    for(int i=0;i<j;i++){
        if(i==0||p[i]>ma){ma=p[i];jm=i;}
        else if(p[i]==ma){jm=i;}
    }
    cout << jm+1 << endl;

    return 0;
}
