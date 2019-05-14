#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        int s[n][3];
        char c;
        int d=0,e=0;
        for(int i=0;i<n;i++){
            cin >> s[i][0] >> c;
            if(c=='D'){s[i][1]=1;d++;}
            else {s[i][1]=0;e++;}
            s[i][2]=1;
        }
        int np=0;
        for(int i=0;i<n;i++){
            if(s[i][2]==1)
            for(int j=i+1;j<n;j++){
                if(s[j][0]==s[i][0]&&s[j][1]!=s[i][1]&&s[j][2]==1){
                    np++;
                    s[i][2]=0;
                    s[j][2]=0;
                    break;
                }
            }
        }
        cout << np << endl;
    }
    return 0;
}
