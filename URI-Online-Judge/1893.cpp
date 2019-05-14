#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(b>=a){
        if(b<=2)cout << "nova\n";
        else if(b<=96)cout << "crescente\n";
        else cout << "cheia\n";
    }else{
        if(b<=2)cout << "nova\n";
        else if(b<=96)cout << "minguante\n";
        else cout << "cheia\n";
    }
    return 0;
}

