#include <iostream>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a),!cin.eof()){
        int t = a.size();
        string r;
        bool ai=false,ab=false;
        for(int i=0;i<t;i++){
            if(a[i]=='_'){
                if(ai){
                    r+="</i>";
                    ai=false;
                }else{
                    r+="<i>";
                    ai=true;
                }
            }else if(a[i]=='*'){
                if(ab){
                    r+="</b>";
                    ab=false;
                }else{
                    r+="<b>";
                    ab=true;
                }
            }else r+=a[i];
        }
        cout << r << endl;
    }
    return 0;
}
