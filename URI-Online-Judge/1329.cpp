#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int m=0,j=0,x;
        while(n--){
            cin>>x;
            if(x==1)j++;else m++;
        }
        printf("Mary won %d times and John won %d times\n",m,j);
    }
    return 0;
}
