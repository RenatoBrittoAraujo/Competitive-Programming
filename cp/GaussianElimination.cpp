#include <bits/stdc++.h>

using namespace std;

#define MAX_N 100

struct AugmentedMatrix {double mat[MAX_N][MAX_N+1];};
struct ColumnVector {double vec[MAX_N];};

ColumnVector GaussianElimination(int n, AugmentedMatrix aug,bool comments=0){
    int i,j,k,l;double t;ColumnVector x;
    for(j=0;j<n-1;j++){
        l=j;
        for(i=j+1;i<n;i++)
            if(fabs(aug.mat[i][j])>fabs(aug.mat[l][j]))l=i;
        if(comments)cout<<"A completed\n";
        for(k=j;k<=n;k++)
            t=aug.mat[j][k],aug.mat[j][k]=aug.mat[l][k],aug.mat[l][k]=t;
        if(comments)cout<<"B completed\n";
        for(i=j+1;i<n;i++)
            for(k=n;k>=j;k--)
                aug.mat[i][k]-=aug.mat[j][k]*aug.mat[i][j]/aug.mat[j][j];
        if(comments)cout<<"C completed\n";
        }
    for(j=n-1;j>=0;j--){
        for(t=0.0,k=j+1;k<n;k++) t+=aug.mat[j][k]*x.vec[k];
        x.vec[j]=(aug.mat[j][n]-t)/aug.mat[j][j];
    }
    if(comments)cout<<"D completed, returning...\n";
    return x;
}


int main() {
    AugmentedMatrix test;
    int n;

    //input is array Nx(N+1) a set of linear equations
    /* Example input
    3
    1 1 2 9
    2 4 -3 1
    3 6 -5 0
    Like
    1x+1y+2z=9
    2x+4y-3z=1
    3x+6y-5z=0
    where n = 3
    */

    cout<<"N = ";cin>>n;
    cout<<"Values = \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cin>>test.mat[i][j];
        }
    }
    ColumnVector result = GaussianElimination(n,test);
    cout<<"Results:\n";
    for(int i=0;i<n;i++){
        cout<<result.vec[i]<<endl;
    }
    return 0;
}

