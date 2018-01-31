    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++) {
            int m, n, a, b, c, h, total = 3;
            cin >> m >> n;
            bool ar[m * n + 1];
            for (int j = m * n; j >= 1; j--) {
                char ch;
                cin >> ch;
                if (ch == '#' || ch == 'm') ar[j] = 0;
                else {
                    if(ch == 'a') a = j;
                    else if(ch == 'b') b = j;
                    else if(ch == 'c') c = j;
                    else if(ch == 'h') h = j;
                    ar[j] = 1;
                }
            }
            vector<int> v[m * n + 1];
            for (int j = m * n; j >= 1; j--) {
                if (ar[j] == 0) continue;
                if (ar[j - 1] == 1) v[j].push_back(j - 1);
                if (ar[j + 1] == 1) v[j].push_back(j + 1);
                if (ar[j - n] == 1) v[j].push_back(j - n);
                if (ar[j + n] == 1) v[j].push_back(j + n);
            }
            int visited[1000], level[1000];
            for (int j = 0; j < 1000; j++) visited[j] = 0;
            queue<int> st;
            st.push(h);
            visited[h] = 1;
            level[h] = 0;
            while(!st.empty()){
                int x = st.front();
                st.pop();
                for(int j=0; j<v[x].size(); j++){
                    int tmp = v[x][j];
                    if(visited[tmp] == 0){
                        level[tmp] = level[x] + 1;
                        visited[tmp] = 1;
                        st.push(tmp);
                    }
                }
            }
            cout << "Case " << i << ": " << max(max(level[a], level[b]), level[c]) << endl;
        }
    }
