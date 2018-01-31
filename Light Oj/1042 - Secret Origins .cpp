#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int t,n;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        for(int j=0; j<31; j++)
        {
            int p=pow(2,j);
            int m=p&n;
            if(m!=0) m=1;
            s+=m+'0';
        }
        int k=0;
        while(1)
        {
            if(s[k]=='1'&&s[k+1]=='0')
            {
                s[k]='0';
                s[k+1]='1';
                break;
            }
            k++;
        }
        for(int l=0; l<k; l++)
        {
            for(int m=l; m<=k; m++)
            {
                if(s[l]<s[m])
                {
                    s[l]='1';
                    s[m]='0';
                }
            }
        }
        n=0;
        for(int j=0; j<31; j++)
        {
            int c=pow(2,j);
            c*=s[j]-'0';
            n+=c;
        }
        printf("Case %d: %d\n",i,n);
        s="";
    }
    return 0;
}
