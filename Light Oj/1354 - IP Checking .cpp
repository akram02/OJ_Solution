    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        //freopen("stdin.txt","r",stdin);
        //freopen("stdout.txt","w",stdout);
        int t;
        scanf("%d", &t);
        for(int i=1; i<=t; i++)
        {
            string desimalIp;
            string binaryIp;
            cin>>desimalIp>>binaryIp;
            int a=0, b=0,  c=0, d=0,k;
            int e=0, f=0, g=0, h=0;
            int j=desimalIp.length()-1;
            for(k=1; desimalIp[j]!='.'; j--)
            {
                d+=k*(desimalIp[j]-'0');
                k*=10;
            }
            j--;
            for(k=1; desimalIp[j]!='.'; j--)
            {
                c+=k*(desimalIp[j]-'0');
                k*=10;
            }
            j--;
            for(k=1; desimalIp[j]!='.'; j--)
            {
                b+=k*(desimalIp[j]-'0');
                k*=10;
            }
            j--;
            for(k=1; desimalIp[j]!='\0'; j--)
            {
                a+=k*(desimalIp[j]-'0');
                k*=10;
            }
     
     
     
     
            j=binaryIp.length()-1;
            for(k=1; binaryIp[j]!='.'; j--)
            {
                h+=k*(binaryIp[j]-'0');
                k*=2;
            }
            j--;
            for(k=1; binaryIp[j]!='.'; j--)
            {
                g+=k*(binaryIp[j]-'0');
                k*=2;
            }
            j--;
            for(k=1; binaryIp[j]!='.'; j--)
            {
                f+=k*(binaryIp[j]-'0');
                k*=2;
            }
            j--;
            for(k=1; binaryIp[j]!='\0'; j--)
            {
                e+=k*(binaryIp[j]-'0');
                k*=2;
            }
     
            if(a==e&&b==f&&c==g&&d==h){
                cout<<"Case "<<i<<": Yes"<<endl;
            }
            else{
                cout<<"Case "<<i<<": No"<<endl;
            }
        }
        return 0;
    }
