#include<stdio.h>
int main()
{
    //freopen("stdin.txt", "r", stdin);
    //freopen("stdout.txt", "w", stdout);
    int t,i;
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        int sum=19, a, b;
        scanf("%d %d", &a, &b);
        sum+=a*4;
        b=a-b;
        if(b<0) b*=-1;
        sum+=b*4;
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
