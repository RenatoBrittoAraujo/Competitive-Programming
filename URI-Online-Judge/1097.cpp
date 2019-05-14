#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int s=0;
    for(int j=7;j>=5;j-=1){
        if(i==11)break;
        cout << "I=" << i << " J=" << j << endl;
        if(j==5+s){s+=2;i+=2;j=8+s;}
    }
    return 0;

}
