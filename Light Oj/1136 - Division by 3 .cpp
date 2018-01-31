#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        long long int x, y, tx, ty, total;
        cin>>x>>y;
        tx=x;
        ty=y;
        while(tx%3 != 1)
            tx--;
        while(ty%3 != 1)
            ty++;
        total = 2*(ty-tx)/3;
        if(y%3==2) total--;
        if(x%3==0) total--;
        cout<<"Case "<<i<<": "<<total<<endl;
    }
    return 0;
}
