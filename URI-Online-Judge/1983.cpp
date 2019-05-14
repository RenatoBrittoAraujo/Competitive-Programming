#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float mat,no,a,b;
    for(int i=0;i<n;i++){
        cin >> a >>b;
        if(i==0||b>no){mat=a;no=b;}
    }
    if(no>=8){
        cout << mat << endl;
    }else{
        cout << "Minimum note not reached\n";
    }
    return 0;
}

