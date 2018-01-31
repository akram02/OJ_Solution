    #include<bits/stdc++.h>
    using namespace std;
    int visited[1000], counter;
     
    void dfs(vector<int> v[], int n) {
        visited[n] = 1;
        counter++;
        for (int i = 0; i < v[n].size(); i++)
            if (!visited[v[n][i]]) dfs(v, v[n][i]);
    }
     
    int main() {
        //freopen("input.txt", "r", stdin);
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++) {
            int w, h, start, tmp, x = 0;
            cin >> w >> h;
            w += 2;
            h += 2;
            bool ar[w * h + 1];
            for (int j = w * h; j >= 1; j--) {
                if (j <= w || j % w == 1 || j % w == 0 || j > (w * (h - 1))) {
                    ar[j] = 0;
                    continue;
                }
                char c;
                cin >> c;
                x++;
                if (c == '@') start = j;
                if (c != '#') ar[j] = 1;
                else ar[j] = 0;
            }
            vector<int> v[w * h + 1];
            for (int j = w * h; j >= 1; j--) {
                if (ar[j] == 0) continue;
                if (ar[j - 1] == 1) {
                    v[j].push_back(j - 1);
                    v[j - 1].push_back(j);
                }
                if (ar[j + 1] == 1) {
                    v[j].push_back(j + 1);
                    v[j + 1].push_back(j);
                }
                if (ar[j - w] == 1) {
                    v[j].push_back(j - w);
                    v[j - w].push_back(j);
                }
                if (ar[j + w] == 1) {
                    v[j].push_back(j + w);
                    v[j + w].push_back(j);
                }
            }
            for (int j = 0; j < 1000; j++) visited[j] = 0;
            counter = 0;
            dfs(v, start);
            cout << "Case " << i << ": " << counter << endl;
        }
    }
