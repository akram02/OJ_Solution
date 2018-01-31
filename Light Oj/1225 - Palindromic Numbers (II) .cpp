#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1,k,j;
    char palin[20];
    cin>>t;
    while(t--)
    {
        scanf("%s", palin);
        char res[20];
        strcpy(res,palin);
        reverse(palin,palin + strlen(palin));
        if(strcmp(palin, res)==0)printf("Case %d: Yes\n",i++);
        else printf("Case %d: No\n",i++);
    }
    return 0;
}
