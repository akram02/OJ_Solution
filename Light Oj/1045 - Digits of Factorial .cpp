    #include<stdio.h>
    #include<math.h>
    // log of x when base 2 => log(x) / log(2)
    double digitofFac[1000001];
    void fac()
    {
        double digit=0;
        for(int j=1; j<=1000000; j++)
        {
            digit+=log10(j);
            digitofFac[j]=digit;
        }
    }
    int main()
    {
        fac();
        //freopen("stdin.txt","r",stdin);
        //freopen("stdout.txt","w",stdout);
        int t;
        scanf("%d", &t);
        for(int i=1; i<=t; i++)
        {
            int n;
            double base, digit=0;
            scanf("%d %lf", &n, &base);
            digit=digitofFac[n];
            digit=digit/log10(base);
            printf("Case %d: %.0lf\n",i,floor(digit)+1);
        }
        return 0;
    }
