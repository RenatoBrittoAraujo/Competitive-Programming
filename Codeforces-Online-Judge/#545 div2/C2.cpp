#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;

static int N, M, D, str[MAXN][MAXN], row[MAXN][MAXN], col[MAXN][MAXN], rsz[MAXN], csz[MAXN], dsc[MAXN];

inline void hash_out(void)
{
    sort(dsc, dsc + D);
    D = unique(dsc, dsc + D) - dsc;
}

inline int get_pos(int x)
{
    return lower_bound(dsc, dsc + D, x) - dsc;
}

int main()
{
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &str[i][j]);

    for (int i = 0; i < N; i++)
    {
        D = M;
        for (int j = 0; j < M; j++)
            dsc[j] = str[i][j];
        hash_out();
        rsz[i] = D;
        for (int j = 0; j < M; j++)
            row[i][j] = get_pos(str[i][j]);
    }
  
    for (int j = 0; j < M; j++)
    {
        D = N;
        for (int i = 0; i < N; i++)
            dsc[i] = str[i][j];
        hash_out();
        csz[j] = D;
        for (int i = 0; i < N; i++)
            col[i][j] = get_pos(str[i][j]);
    }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

		cout<<i<<' '<<j<<' '<<row[i][j]<<' '<<col[i][j]<<' '<<rsz[i]<<' '<<csz[j]<<endl;

            int r = row[i][j], c = col[i][j];
            if (r < c)
                printf("ANS = %d\n", max(csz[j], rsz[i] + c - r));
            else
                printf("ANS = %d\n", max(rsz[i], csz[j] + r - c));
        }
    }
    return 0;
}
