    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        //freopen("stdin.txt","r",stdin);
        //freopen("stdout.txt","w",stdout);
        int t;
        cin>>t;
        for(int i=1; i<=t; i++)
        {
            cout<<"Case "<<i<<":"<<endl;
            stack<string> bac;
            stack<string> forwar;
            bac.push("http://www.lightoj.com/");
            string s;
            while(1)
            {
                cin>>s;
                if(s=="QUIT") break;
                else if(s=="VISIT")
                {
                    cin>>s;
                    cout<<s<<endl;
                    bac.push(s);
                    while(!forwar.empty())
                        forwar.pop();
                }
                else if(s=="BACK")
                {
                    if(bac.top()=="http://www.lightoj.com/")
                    {
                        cout<<"Ignored"<<endl;
                    }
                    else
                    {
                        forwar.push(bac.top());
                        bac.pop();
                        cout<<bac.top()<<endl;
                    }
                }
                else
                {
                    if(forwar.empty())
                    {
                        cout<<"Ignored"<<endl;
                    }
                    else
                    {
                        cout<<forwar.top()<<endl;
                        bac.push(forwar.top());
                        forwar.pop();
     
                    }
                }
            }
        }
        return 0;
    }
