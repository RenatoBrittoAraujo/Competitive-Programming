#include <bits/stdc++.h>

using namespace std;

vector<int> lo;

using ii = pair<int,int>;
using iii = pair<int,ii>;

//Procura qual foi o nodo inicial conectado a esse nodo
int pr(int i){
    if(lo[i]==i){
        return i;
    }else{
        return lo[i]=pr(lo[i]);
    }
}

int main ()
{
    int m,n;
    while (cin>>n>>m,bool(n+m)){
        int a,b,d;
        iii f;
        vector<iii> ln;
        for(int i=0;i<m;i++){
            cin>>a>>b>>d;
            ln.push_back(iii(d,ii(a,b)));
        }
        
        //ordena em função das menores distancias
        sort(ln.begin(),ln.end());
        int c=0;

        lo.clear();
        for(int i=0;i<n;i++)lo.push_back(i);

        for(int i=0;i<m;i++){
            f=ln[i];
            //se os nodos iniciais forem diferentes
            if (pr(f.second.first)!=pr(f.second.second))
            {
                //o nodo inicial da primeira conexão é igual ao da segunda
                lo[pr(f.second.first)]=pr(f.second.second);
                //e o  tamanha do percurso aumenta o valor da distancia percorrida
            	c+=f.first;
            }
        }
        cout<<c<<endl;
        ln.clear();
    }
}
