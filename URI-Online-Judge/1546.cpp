#include <iostream>

using namespace std;

int main()
{
    int c,n,x;
    cin>>c;
    while(cin>>n,c--){
        while(n--){
            cin>>x;
            switch(x){
                case 1:
                    cout << "Rolien\n";
                    break;
                case 2:
                    cout << "Naej\n";
                    break;
                case 3:
                    cout << "Elehcim\n";
                    break;
                case 4:
                    cout << "Odranoel\n";
                    break;
            }
        }
    }
    return 0;
}
