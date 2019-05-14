#include <bits/stdc++.h>
using namespace std;
int rr;
struct abc{
    int x, id;
    bool operator < (const abc &a) const{
        if (abs(x - rr) != abs(a.x - rr)){
            return abs(x - rr) < abs(a.x - rr);
        }
        if (x != a.x){
            return x > a.x;
        }
        if (x < rr){
            return id > a.id;
        }
        else{
            return id < a.id;
        }
    }
}c[10010];
char s[10010];
char str[10010], ans[10010];
int t, re;
int main(){
    int n, m, i;
    scanf("%d%d%s", &n, &m, s);
    for (i = 0; i < n; i++){
        c[i].id = i;
        c[i].x = s[i] - '0';
    }
    re = 1<<30;
    for (rr = 0; rr < 10; rr++){
        sort(c, c + n);
        strcpy(str, s);
        t = 0;
        for (i = 0; i < m; i++){
            t += abs(rr - c[i].x);
            str[c[i].id] = '0' + rr;
        }
        if (t < re){
            re = t;
            strcpy(ans, str);
        }
        else if (t == re && strcmp(str, ans) < 0){
            strcpy(ans, str);
        }
    }
    printf("%d\n%s\n", re, ans);
    return 0;
}
