#include <iostream>

using namespace std;

int main()
{
    float o,b,i;
    cin>>o>>b>>i;
    if(o==b||b==i||i==o)cout << "Empate\n";
    else if(min(o,min(b,i))==o)cout << "Otavio\n";
    else if(min(o,min(b,i))==b)cout << "Bruno\n";
    else if(min(o,min(b,i))==i)cout << "Ian\n";

    return 0;
}
