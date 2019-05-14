#include <iostream>

using namespace std;

int main()
{
    int i=1;
    for(int j=7;j>=5;j-=1){
        if(i==11)break;
        cout << "I=" << i << " J=" << j << endl;
        if(j==5){i+=2;j=8;}
    }
    return 0;

}
