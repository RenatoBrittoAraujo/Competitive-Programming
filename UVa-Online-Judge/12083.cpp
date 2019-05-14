#include <bits/stdc++.h>

using namespace std;

#define MAX_V 600
#define inf 1000000
using vi = vector<int>;

int G[MAX_V][MAX_V];
int ht[MAX_V];
bool sex[MAX_V];
string ms[MAX_V][2];
vi p;
int mf,f,s,t;

bool test_couple(int i,int j){
    if(abs(ht[i]-ht[j])>40)return 0;
    if(sex[i]==sex[j])return 0;
    if(ms[i][0]!=ms[j][0])return 0;
    if(ms[i][1]==ms[j][1])return 0;
    return 1;
}

void augment(int v,int me){
    if(v==s){
        f=me;
        return;
    }else if(p[v]!=-1){
        augment(p[v],min(me,G[p[v]][v]));
        G[p[v]][v]-=f;
        G[v][p[v]]+=f;
    }
}

int main(){
    s=0;
    int c,n;
    cin>>c;
    char ch;
    while(c--){
        cin>>n;
        t=n+1;
        memset(G,0,sizeof G);
        for(int i=1;i<=n;i++){
            cin>>ht[i]>>ch>>ms[i][0]>>ms[i][1];
            sex[i]= ch=='M'?1:0;
            //cout<<"SEX = "<<sex[i]<<endl;
            if(sex[i])G[0][i]=1;
            else G[i][n+1]=1;
            for(int j=1;j<i;j++){
                if(test_couple(i,j)){
                    //cout<<"Valid couple\n";
                    if(sex[i])G[i][j]=1;
                    else G[j][i]=1;
                }
            }
        }

        /*
        print graph
        for(int i=0;i<n+2;i++){
            for(int j=0;j<n+2;j++){
                printf(" %5d",G[i][j]);
            }printf("\n");
        }*/

        mf=0;

        while(1){
            f=0;
            vi dist(MAX_V, inf);
            dist[s]=0;
            queue<int> q;
            q.push(s);
            p.assign(MAX_V,-1);
            while(!q.empty()){
                int u = q.front();
                //cout<<"Exploring node "<<u<<endl;
                q.pop();
                if(t==u)break;
                for(int v=0;v<MAX_V;v++)
                    if(G[u][v]>0&&dist[v]==inf)
                        dist[v]=dist[u]+1,q.push(v),p[v]=u;
            }
            augment(t,inf);
            if(f==0)break;
            mf+=f;
        }

        //cout<<"MaxFlow = "<<mf<<endl;
        //cout<<"Ans = ";
        cout<<n-mf<<endl;


    }
    return 0;
}
