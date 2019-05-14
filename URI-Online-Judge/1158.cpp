#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++){
        int s=0;
        cin >> x >> y;
        if(x%2==0){
            for(int j=x+1;j<x+1+2*y;j+=2){s+=j;}
        }else{
            for(int j=x;j<x+2*y;j+=2){s+=j;}
        }
        cout << s << endl;
    }
    return 0;
}
