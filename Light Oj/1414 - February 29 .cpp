#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    string m[]={
        "January", "February", "March", "April",
        "May", "June", "July","August", "September",
        "October", "November","December"};
    cin>>t;
    for(int i=1; i<=t; i++){
        string m1, m2, fau;
        int d1, d2, y1, y2, ty1, ty2, total;
        cin>>m1>>d1>>fau>>y1;
        cin>>m2>>d2>>fau>>y2;
        if(!(m1==m[0] || m1==m[1])) y1++;
        if(m2==m[0] || (m2==m[1] && d2 != 29)) y2--;
 
        ty1=y1;
        ty2=y2;
        while(ty1%4 != 0)
            ty1--;
        while(ty2%4 != 0)
            ty2++;
 
        total=(ty2-ty1)/4;
        if(y1%4!=0) total--;
        if(y2%4!=0) total--;
        total++;
        while(y1%100!=0){
            y1++;
        }
        while(y1%400!=0 && y1<=y2){
            y1+=100;
            total--;
        }
        int divisor=(y2-y1)/400;
//        cout<<y1<<endl<<y2<<endl;
        total-=3*divisor;
        y1+=400*divisor;
        while(y1<=y2){
            if(y1%400!=0) total--;
            y1+=100;
        }
        printf("Case %d: %d\n", i,total);
    }
    return 0;
}
