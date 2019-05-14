#include <iostream>

using namespace std;

int main()
{
    int n;
    string x;
    cin >> n;
    float ts=0,tb=0,ta=0,s=0,b=0,a=0;
    int q,w,e,r,t,y;
    while(n--){
        cin >> x;
        cin >>q>>w>>e>>r>>t>>y;
        ts+=q;tb+=w;ta+=e;s+=r;b+=t;a+=y;
    }
    float ps=s/ts,pb=b/tb,pa=a/ta;
    printf("Pontos de Saque: %.2f %%.\n",ps*100);
    printf("Pontos de Bloqueio: %.2f %%.\n",pb*100);
    printf("Pontos de Ataque: %.2f %%.\n",pa*100);
    return 0;
}
