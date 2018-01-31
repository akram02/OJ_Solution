    #include<bits/stdc++.h>
    using namespace std;
    struct Pair{
        int divisor, number;
    };
    bool comp(Pair q, Pair p){
        return q.divisor<p.divisor || (q.divisor == p.divisor && q.number > p.number);
    }
    int main() {
        //freopen("input.txt", "r", stdin);
        vector<Pair> v;
        Pair p;
        p.divisor = 0;
        p.number = 0;
        v.push_back(p);
        for(int i=1; i<=1000; i++){
            p.number = i;
            p.divisor = 0;
            for(int j=1; j<=i; j++){
                if(i%j==0) p.divisor++;
            }
            v.push_back(p);
        }
        sort(v.begin(), v.end(), comp);
        int t;
        cin>>t;
        for(int i=1; i<=t; i++){
            int n;
            cin>>n;
            printf("Case %d: %d\n", i, v[n].number);
        }
    }
