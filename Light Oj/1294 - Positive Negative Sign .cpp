#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //freopen("stdin.txt","r",stdin);
    //freopen("stdout.txt","w",stdout);
    long long int t;
    cin>>t;
    for(long long int  i=1; i<=t; i++)
    {
        long long int n,m;
        cin>>n>>m;
        cout<<"Case "<<i<<": "<<n*m/2<<endl;
    }
    return 0;
}
