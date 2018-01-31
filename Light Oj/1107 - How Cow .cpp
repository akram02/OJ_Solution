#include<stdio.h>
 
int main()
{
    //freopen("stdin.txt", "r", stdin);
    int t, i, j;
    int x1, y1, x2, y2, m;
    int x, y;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n", i);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);
        for(j=1; j<=m; j++)
        {
            scanf("%d %d", &x, &y);
            if(x>x1 && x<x2 && y>y1 && y<y2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
