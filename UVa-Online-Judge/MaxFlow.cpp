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



ALT


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

