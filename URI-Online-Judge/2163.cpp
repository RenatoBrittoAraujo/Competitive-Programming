#include <iostream>

using namespace std;

int main()
{
    int l,c;
    cin >> l >> c;
    int m[l][c];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
        }
    }
    int px=0,py=0;
    for(int i=1;i<l-1;i++){
        for(int j=1;j<c-1;j++){
            if(m[i][j]==42){
                bool foi=true;
                for(int k=i-1;k<i+2;k++){
                    for(int l=j-1;l<j+2;l++){
                        if(!(l==j&&k==i)){
                            if(m[k][l]!=7)foi=false;
                        }
                    }
                }
                if(foi){
                    px=i+1;py=j+1;break;break;
                }
            }
        }
    }
    cout << px << " " << py << endl;
    return 0;
}
