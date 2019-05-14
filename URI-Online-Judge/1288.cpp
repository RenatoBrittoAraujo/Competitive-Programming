#include <bits/stdc++.h>

using namespace std;

#define MAX_W 1000
#define MAX_V 1000
#define MAX_ITENS 1000

int W[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_W][MAX_V];

int knapsack(int i, int w) {
    if (i < 0 || w <= 0) return 0;
    if (memo[i][w] != -1) return memo[i][w];
    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);
    return memo[i][w] = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);
}

int main(){
    int c,w,n,r;
    cin>>c;
    while(c--){
        memset(memo, -1, sizeof memo);
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>V[i]>>W[i];
        }
        cin>>w;
        cin>>r;
        if(knapsack(n-1,w)>=r)cout<<"Missao completada com sucesso\n";
        else cout <<"Falha na missao\n";
    }
    return 0;
}
