#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        string a;
        cin>>a;
        int p=0;
        for(int i=0;i<n;i++){
            switch(a[i]){
                case 'D':
                    p++;
                    break;
                case 'E':
                    p--;
                    break;
            }
            if(p>3)p=0;
            if(p<0)p=3;
        }
        switch(p){
            case 0:
                cout << "N\n";
                break;
            case 1:
                cout << "L\n";
                break;
            case 2:
                cout << "S\n";
                break;
            case 3:
                cout << "O\n";
                break;
        }
    }
    return 0;
}
