#include<cstdio>
using namespace std;
 
int main()
{
    int i,n,f,j,sum,cases=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&f);
        sum=0;
        for(i=0;i<f;i++){
            scanf("%d",&j);
            if(j>0) sum+=j;
        }
        printf("Case %d: %d\n",cases++,sum);
    }
    return 0;
}
