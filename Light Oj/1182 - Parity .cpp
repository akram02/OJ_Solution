#include<stdio.h>
long long ones(long long n){
    long long  count=0;
    while(n!=0){
        if(n%2==1) count++;
        n/=2;
    }
    return count;
}
int main()
{
    long long n, m, output=0;
    //freopen("stdin.txt", "r", stdin);
    scanf("%lld", &n);
    for(m=1;m<=n;m++){
        long long a;
        scanf("%lld", &a);
        a=ones(a);
 
        if(a%2==1) printf("Case %lld: odd\n", m);
        else printf("Case %lld: even\n",m);
    }
    return 0;
}
