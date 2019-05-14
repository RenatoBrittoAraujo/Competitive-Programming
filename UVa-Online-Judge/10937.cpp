#include <bits/stdc++.h>

using namespace std;

#define inf 1000000

int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};

vector<int> G[3000],tr;
vector<pair<int,int>> val,expo;
int ntr,h,w,ix,iy,v,ini,m[55][55],dist[11][11];
map<int,int> supdist;
char c;string re;
bool pos;

int dptable[4000][11];
int mv;

int tsp(int p,int pos){
    if(dptable[pos][p]!=-1)return dptable[pos][p];
    if(pos==0)if(p==0)return dptable[pos][p]=0;else return dptable[pos][p]=10000;
    int va;bool df=0;
    for(int i=0;i<=ntr;i++){
        if(pos&(1<<i)){
            if(!df){df=1;va=tsp(i,pos^(1<<i))+dist[i][p];}
            else va=min(tsp(i,pos^(1<<i))+dist[i][p],va);
    }}
    return dptable[pos][p] = va;
}

int bfsdis[3000];
int visited[3000];

void bfs_dist(int iv){
    memset(bfsdis,inf,sizeof bfsdis);
    memset(visited,0,sizeof visited);
    queue<int> q;
    q.push(iv);
    bfsdis[iv]=0;
    visited[iv]=1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: G[u]){
            bfsdis[v]=min(bfsdis[v],bfsdis[u]+1);
            if(!visited[v])
                q.push(v),visited[v]=1;
        }
    }
}

int main(){
    while(cin>>h>>w,bool(h+w)){
        memset(m,0,sizeof m);
        memset(dist,inf,sizeof dist);
        supdist.clear();
        for(int i=0;i<v;i++)G[i].clear();
        tr.clear();
        val.clear();
        expo.clear();
        pos=1;
        v=1;
        cin.ignore();
        //inital processing of map
        for(int i=0;i<h;i++){
            getline(cin,re);
            for(int j=0;j<w;j++){
                c=re[j];
                if(c=='~'||c=='#')continue;
                switch(c){
                case '.':
                    m[i][j]=1;
                    break;
                case '*':
                    expo.push_back(make_pair(i,j));
                    break;
                case '!':
                    val.push_back(make_pair(i,j));
                    m[i][j]=1;
                    break;
                case '@':
                    ix=i;iy=j;
                    m[i][j]=1;
                    break;
                }
            }
        }

        //cout<<"Pre processing input\n";

        ntr = val.size();

        for(int i=0;i<expo.size();i++){
            for(int k=0;k<8;k++){
                int v1 = expo[i].first+dx[k];
                int v2 = expo[i].second+dy[k];
                if(!(v1>-1&&v1<h&&v2>-1&&v2<w))continue;
                for(int j=0;j<ntr;j++){
                    if(v1==val[j].first&&
                       v2==val[j].second){pos=0;break;}
                }
                if(v1==ix&&v2==iy){pos=0;break;}
                m[v1][v2]=0;
            }
        }

        if(!pos){cout<<-1<<endl;continue;}

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(m[i][j]==1){m[i][j]=v;
                    if(i==ix&&j==iy)ini=v;
                    else for(int k=0;k<val.size();k++){
                        if(i==val[k].first&&j==val[k].second)tr.push_back(v);
                }v++;}
            }
        }


        //cout<<"Map -> graph\n";

        //turning to graph
        int i=0,j=0;
        for(int k=1;k<v;k++){
            while(m[i][j]==0){j++;if(j==w){i++;j=0;}}
            for(int r=0;r<4;r++){
                int v1 = i+dx[r],v2 = j+dy[r];
                if(!(v1>-1&&v1<h&&v2>-1&&v2<w))continue;
                if(m[v1][v2]!=0){
                    int l=m[v1][v2];
                    G[k].push_back(l);
                    G[l].push_back(k);
                }
            }
            j++;if(j==w){i++;j=0;}
        }

        //cout<<"Floyd algorithm\n";
        //cout<<"BFS VertList distance processing\n";

        supdist[0]=ini;
        for(int i=0;i<tr.size();i++)supdist[i+1]=tr[i];

        for(int i=0;i<ntr+1;i++){
            bfs_dist(supdist[i]);
            for(int j=0;j<ntr+1;j++){
                if(i==j)dist[i][j]=0;
                else{
                    dist[i][j]=bfsdis[supdist[j]];
                    dist[j][i]=bfsdis[supdist[j]];
                }
            }

        }

        //testing for validity
        for(int i=0;i<ntr+1;i++){
            for(int j=i+1;j<ntr+1;j++){
                if(dist[i][j]>=inf)
                    {pos=0;break;}
            }
            if(!pos)break;
        }

        if(!pos)cout<<-1<<endl;
        else{
            /*cout<<endl<<"Distances matrix:\n";
            for(int i=0;i<=ntr;i++){
                for(int j=0;j<=ntr;j++){
                    printf("%2d ",dist[i][j]);
                }printf("\n");
            }printf("\n");*/

            //cout<<"Performing TSP\nAnwser = ";

            mv = (1<<ntr+1)-1;

            //tsp
            memset(dptable,-1,sizeof dptable);
            cout<<tsp(0,mv)<<endl;
            //cout<<"Done\n";
        }
    }
    return 0;
}
