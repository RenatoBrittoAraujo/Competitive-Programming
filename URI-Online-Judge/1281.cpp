#include <iostream>
#include <bits/stdc++.h>

using namespace std;

using ii = pair<string, double>;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        pair<string,double> p[n];
        string x;float y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            p[i]=ii(x,y);
        }
        int q;
        cin>>q;
        float pr=0;
        for(int i=0;i<q;i++){
            string it;int qu;
            cin>>it>>qu;
            for(int i=0;i<n;i++){
                if(p[i].first==it){
                    pr+=p[i].second*float(qu);
                    break;
                }
            }
        }
        printf("R$ %.2f\n",pr);
    }
    return 0;
}
