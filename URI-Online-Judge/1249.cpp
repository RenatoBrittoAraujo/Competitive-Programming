#include <iostream>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a),!cin.eof()){
        int t = a.size();
        string r;
        for(int i=0;i<t;i++){
            int v = (int)a[i];
            if(v>=97&&v<=122){v+=13;if(v>122)v-=26;}
            if(v>=65&&v<=90){v+=13;if(v>90)v-=26;}
            r+=(char)v;
        }
        cout <<r << endl;
    }
    return 0;
}
