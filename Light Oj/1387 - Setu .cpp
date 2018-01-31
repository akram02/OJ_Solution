#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //freopen("stdin.txt","r",stdin);
    //freopen("Stout.txt","w",stdout);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        int amount=0;
        int total=0;
        cout<<"Case"<<" "<<i<<":"<<endl;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            string s;
            cin>>s;
            if(s=="donate"){
                cin>>amount;
                total+=amount;
            }
            else if(s=="report"){
                cout<<total<<endl;
            }
        }
    }
    return 0;
}
