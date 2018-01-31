#include<stdio.h>
#include<math.h>
int main()
{
    long long s, root, t, i, x, y;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &s);
        root = sqrt(s);
        if(root%2==0)
        {
            if(s-root*root>0 && s-root*root<=root+1)
            {
                x = root+1;
                y = s - root*root;
            }
            else if(s-root*root>0 && s-root*root>root+2)
            {
                x = root-(s-(root*root+root+2));
                y = root+1;
            }
            else if(s-root*root>0 && s-root*root==root+2)
            {
                x = root;
                y = root + 1;
            }
            else
            {
                x = root;
                y = 1;
            }
        }
        else
        {
            if(s-root*root>0 && s-root*root<=root+1)
            {
                y = root+1;
                x = s - root*root;
            }
            else if(s-root*root>0 && s-root*root>root+2)
            {
                y = root-(s-(root*root+root+2));
                x = root+1;
            }
            else if(s-root*root>0 && s-root*root==root+2)
            {
                y = root;
                x = root + 1;
            }
            else
            {
                x = 1;
                y = root;
            }
        }
        printf("Case %lld: %lld %lld\n", i, x, y);
    }
}
