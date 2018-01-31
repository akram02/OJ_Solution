#include<stdio.h>
int twoarr[2][201];
int main()
{
    //freopen("stdin.txt", "r", stdin);
    //freopen("stdout.txt", "w", stdout);
 
    int t,i,j, m, n;
    int k=0,y=1;
    two();
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &m, &n);
        int arr[m][n];
        if(m==1) printf("Case %d: %d\n", i, n);
        else if(n==1) printf("Case %d: %d\n", i, m);
        else if(m==2)
        {
            printf("Case %d: %d\n", i, twoarr[m-1][n]);
        }
        else if(n==2) printf("Case %d: %d\n", i, twoarr[n-1][m]);
        else
        {
            int u,v;
            for(u=0; u<m; u++) for(v=0; v<n; v++) arr[u][v]=0;
 
            for(u=0; u<m; u++)
                if(u%2==0) for(v=0; v<n; v+=2) arr[u][v]=1;
                else for(v=1; v<n; v+=2) arr[u][v]=1;
 
            int count=0;
            for(u=0; u<m; u++) for(v=0; v<n; v++) if(arr[u][v]==1) count++;
            printf("Case %d: %d\n", i, count);
        }
    }
    return 0;
}
void two()
{
 
    int k=0,y=1,i;
    for(i=1; i<=200; i++)
    {
        if(y==1||y==2)
        {
            k+=2;
            y++;
        }
        else if(y==3) y++;
        else y=1;
        twoarr[1][i]=k;
    }
}
