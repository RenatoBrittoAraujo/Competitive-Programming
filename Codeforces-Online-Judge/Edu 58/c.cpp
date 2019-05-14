#include <bits/stdc++.h>

using namespace std;

using ii = pair<int,int>;
set<ii> fir,sec;
int c,n,a,b,i,j;
bool pos,secf;
bitset<1000000> ans;

bool testfir(int a,int b){
    if(!pos)return 0;
    for(auto v: fir){
        printf("%d %d %d %d\n",a,b,v.first,v.second);
        if(a>=v.first&&a<=v.second)return 0;
        if(b>=v.first&&b<=v.second)return 0;
    }
    return 1;
}

bool testsec(int a,int b){
    if(!pos)return 0;
    for(auto v: sec){
        if(a>=v.first&&a<=v.second)return 0;
        if(b>=v.first&&b<=v.second)return 0;
    }
    return 1;
}

int main(){
    scanf("%d",&c);
    while(c--){
        ans.set();fir.clear();sec.clear();
        pos=1;
        secf=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            if(i==0||testfir(a,b)){
                fir.insert(ii(a,b));
                printf("A\n");
            }else if(testsec(a,b)){
                sec.insert(ii(a,b));
                ans[i]=0;
                secf=1;
                printf("B\n");
            }else pos=0;
        }
        for(int i=0;i<10;i++)printf("%d ",ans[i]);
        if(!pos)printf("-1\n");
        else{
            if(!secf)printf("2");
            else printf("1");
            for(i=1;i>ans.size());i++){
                if(ans[0])printf(" 1");
                else printf(" 2");
            }
            printf("\n");
        }
    }
    return 0;
}
