    #include<bits/stdc++.h>
    #define pb push_back
    using namespace std;
    vector< vector<int> > ar;
    int m;
    void input(int n) {
        vector<int> v;
        v.pb(0);
        ar.pb(v);
        int k = 1, t = 2 * n - 1;
        for (int i = 1; i <= t; i++) {
            vector<int> vt;
            ar.pb(vt);
            ar[i].pb(0);
            for (int j = 1; j <= k; j++) {
                int a;
                scanf("%d", &a);
                ar[i].pb(a*-1);
            }
            ar[i].pb(0);
            i < n ? k++ : k--;
        }
        ar.pb(v);
        ar[t].pb(0), ar[t].pb(0);
    }
     
    int solve(int n, int x) {
        if (ar[n][x] == 0) return 0;
        else if (ar[n][x] < 0) {
            if (n >= m) ar[n][x] = ar[n][x] * -1 + max(solve(n + 1, x - 1), solve(n + 1, x));
            else ar[n][x] = ar[n][x] * -1 + max(solve(n + 1, x), solve(n + 1, x + 1));
        }
        return ar[n][x];
    }
     
    int main() {
        int t, n;
        scanf("%d", &t);
        for (int i = 1; i <= t; i++) {
            scanf("%d", &n);
            m = n;
            input(n);
            printf("Case %d: %d\n", i, solve(1, 1));
            ar.clear();
        }
    }
