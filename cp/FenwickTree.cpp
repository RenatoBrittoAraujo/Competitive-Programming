#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;

int LSOne(int n){
    return (n&(-n));
}

class FenwickTree{
    private: vi ft;
    public:
        FenwickTree(int n){ft.assign(n+1,0);}
        int rsq(int b){
            int sum = 0;
            for(;b;b-=LSOne(b))sum+=ft[b];
            return sum;
        }
        int rsq(int a,int b){
            return rsq(b)-(a==1?0:rsq(a-1));
        }
        void adjust(int k,int v){
            for(;k<(int)ft.size();k+=LSOne(k))ft[k]+=v;
        }
};

int main(){
    int f[] = {2,4,5,5,6,6,6,7,7,8,9};
    FenwickTree ft(10);
    for(int i=0;i<11;i++)ft.adjust(f[i],1);

    cout<<ft.rsq(1,1)<<endl;
    cout<<ft.rsq(1,2)<<endl;
    cout<<ft.rsq(4,7)<<endl;
    cout<<ft.rsq(2,5)<<endl;
    cout<<ft.rsq(1,10)<<endl;

    return 0;
}
