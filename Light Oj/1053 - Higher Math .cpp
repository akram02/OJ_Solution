#include<stdio.h>
int main()
{
    int n, m, output=0;
    //freopen("stdin.txt", "r", stdin);
    scanf("%d", &n);
    for(m=1;m<=n;m++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a>b&&a>c) {
            if(a*a==b*b+c*c) printf("Case %d: yes\n", m);
            else printf("Case %d: no\n", m);
        }
        else if(b>a&&b>c){
            if(b*b==a*a+c*c) printf("Case %d: yes\n", m);
            else printf("Case %d: no\n", m);
        }
        else if(c>a&&c>b){
            if(c*c==a*a+b*b) printf("Case %d: yes\n", m);
            else printf("Case %d: no\n", m);
        }
        else printf("Case %d: no\n", m);
    }
    return 0;
}
