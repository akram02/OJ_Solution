    #include <stdio.h>
     
    int main()
    {
        int t, n, m, i, j, k, l, x, y, tmp, o, arr[10000];
        char c;
        scanf("%d", &t);
        for(i=1;i<=t;i++){
            scanf("%d %d", &n, &m);
            for(j=0;j<n;j++)
                scanf("%d", &arr[j]);
            for(j=0;j<m;j++)
            {
                getchar();
                scanf("%c", &c);
                if(c=='S'){
                    scanf("%d", &o);
                    for(k=0;k<n;k++)
                        arr[k]+=o;
                }
                else if(c=='M'){
                    scanf("%d", &o);
                    for(k=0;k<n;k++)
                        arr[k]*=o;
                }
                else if(c=='D'){
                    scanf("%d", &o);
                    for(k=0;k<n;k++)
                        arr[k]/=o;
                }
                else if(c=='R'){
                    l=n-1;
                    for(k=0;k<l;k++,l--){
                        tmp = arr[k];
                        arr[k] = arr[l];
                        arr[l] = tmp;
                    }
                }
                else{
                    scanf("%d %d", &x, &y);
                    tmp=arr[x];
                    arr[x]=arr[y];
                    arr[y]=tmp;
                }
            }
     
            printf("Case %d:\n",i);
            for(j=0;j<n-1;j++){
                printf("%d ", arr[j]);
            }
            printf("%d\n", arr[n-1]);
        }
        return 0;
    }
