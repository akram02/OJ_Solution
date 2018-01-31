    #include<stdio.h>
     
    int main()
    {
        //freopen("stdin.txt","r",stdin);
        //freopen("stdout.txt","w",stdout);
        unsigned long long int t, n, m, w, i, j, f;
        scanf("%llu", &t);
        for(i=1; i<=t; i++)
        {
            scanf("%llu", &w);
            f=0;
            if(w%2==1) f=0;
            else
            {
                for(j=2; j<=w; j*=2)
                {
                    if(j<=0) break;
                    if(w%j==0)
                    {
                        n=w/j;
                    }
                    if(n%2==1)
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==0) printf("Case %llu: Impossible\n", i);
            else printf("Case %llu: %llu %llu\n", i, n, j);
        }
        return 0;
    }
