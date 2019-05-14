#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int s=0;
    int n=0;
    for(int i=0;i<a.size();i++){
        int v = (int)a[i]-48;
        if(v==1&&i<a.size()-1&&(int)a[i+1]-48==0){n++;i++;s+=10;}
        else {n++;s+=v;}
    }
    float r = float(s)/float(n);
    printf("%.2f\n",r);
    return 0;
}
