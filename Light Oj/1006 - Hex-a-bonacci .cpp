#include<stdio.h>
int main()
{
    //freopen("stdin.txt", "r", stdin);
    int t, i, j;
    int a, b, c, d, e, f, n;
    int arr[10001];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;
        if(n<=5){
            printf("Case %d: %d\n", i, arr[n]%10000007);
        }
        else{
            for(j=6;j<=n;j++){
                arr[j]=(arr[j-1]%10000007+arr[j-2]%10000007+arr[j-3]%10000007+arr[j-4]%10000007+arr[j-5]%10000007+arr[j-6]%10000007);
            }
            printf("Case %d: %d\n", i, arr[n]%10000007);
        }
    }
    return 0;
}
