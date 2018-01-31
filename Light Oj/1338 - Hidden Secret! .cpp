    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        //freopen("input.txt", "r", stdin);
        int t;
        cin>>t;
        getchar();
        for(int i=1; i<=t; i++){
            string s, tt, tmp;
            getline(cin,s);
            getline(cin,tt);
            for(int x=0; x<s.size(); x++){
                if(s[x]>96) tmp+='A'+ s[x] - 'a';
                else if(s[x]>64) tmp+=s[x];
            }
            s = tmp;
            sort(s.begin(), s.end());
            tmp="";
            for(int x=0; x<tt.size(); x++){
                if(tt[x]>96) tmp+='A'+tt[x]-'a';
                else if(tt[x]>64) tmp+=tt[x];
            }
            tt = tmp;
            sort(tt.begin(), tt.end());
            if(s==tt) tmp="Yes";
            else tmp="No";
            cout<<"Case "<<i<<": "<<tmp<<endl;
        }
    }
