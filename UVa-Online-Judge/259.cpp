#include <bits/stdc++.h>

using namespace std;

#define MAX_V 38
using vi = vector<int>;
#define inf 1000

int res[MAX_V][MAX_V]={0},mf,f,s,t;
vi p;

void augment(int v,int me){
    if(v==s){
        f=me;
        return;
    }else if(p[v]!=-1){
        augment(p[v],min(me,res[p[v]][v]));
        res[p[v]][v]-=f;
        res[v][p[v]]=1;
    }
}

int main(){
    string st;
    for(int i=1;i<=26;i++)res[i][0]=0;
    s=0;
    t=37;

    while(1){
        int appno=0;
        for(int i=1;i<=26;i++)
            for(int j=27;j<=36;j++)
                res[i][j]=0,res[j][i]=0;

        for(int i=27;i<=36;i++)
            res[i][37]=1,res[37][i]=1;

        for(int i=1;i<=26;i++)
                res[i][0]=0,res[i][37];

        bool br=0;
        for(int i=1;i<=26;i++)res[0][i]=0;

        for(int i=1;i<=26;i++)
            for(int j=27;j<=36;j++)
                res[j][i]=0;

        while(getline(cin,st),st.size()&&!cin.eof()){
            stringstream ss;
            ss<<st;
            string a,b;
            ss>>a>>b;
            int ie = a[0]-64;
            int w = a[1]-48;
            appno+=w;
            res[0][ie]=w;
            for(int i=0;i<b.size()-1;i++){
                int com = b[i]-48+27;
                res[ie][com]=inf;
            }
        }


        /*cout<<"\n\nBEFORE\n\n";
        for(int i=0;i<38;i++){
            for(int j=0;j<38;j++){
                printf(" %4d",res[i][j]);
            }cout<<endl;
        }*/

        mf=0;

        //MaxFlow BFS
        while(1){
            f=0;
            vi dist(MAX_V, inf);
            dist[s]=0;
            queue<int> q;
            q.push(s);
            p.assign(MAX_V,-1);
            while(!q.empty()){
                int u = q.front();
                q.pop();
                if(t==u)break;
                for(int v=0;v<MAX_V;v++)
                    if(res[u][v]>0&&dist[v]==inf)
                        dist[v]=dist[u]+1,q.push(v),p[v]=u;
            }
            augment(t,inf);
            if(f==0)break;
            mf+=f;
        }

        /*cout<<"\n\nLATER\n\n";
         for(int i=0;i<38;i++){
            for(int j=0;j<38;j++){
                printf(" %4d",res[i][j]);
            }cout<<endl;
        }*/

        //cout<<"AppNo="<<appno<<" MaxFlow="<<mf<<endl<<"Ans=>\n";
        if(appno>mf)cout<<'!'<<endl;
        else{
            string out;
            for(int i=27;i<37;i++){
                if(res[i][37]==1)out+='_';
                else for(int j=1;j<27;j++)if(res[i][j]==1){out+=char(j-1+65);break;}
            }
            cout<<out<<endl;
        }
        if(cin.eof())break;
    }
    return 0;
}
