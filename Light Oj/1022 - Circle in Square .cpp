#include <stdio.h>
#include <math.h>
int main ()
{
    //freopen("stdin.txt","r",stdin);
    //freopen("stdout.txt","w",stdout);
    int t, i;
    char ch[1000];
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        double r, area, pi;
        pi=2*acos(0.);
        scanf("%lf", &r);
        printf("Case %d: %.2lf\n",i, 2*r*r*2- pi*r*r);
    }
    return 0;
}
