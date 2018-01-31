    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        //freopen("input.txt", "r", stdin);
        int t;
        cin >> t;
        for (int i = 1; i <= t; i++) {
            int n, r, s, d;
            cin>>n>>r;
            vector<int> vt[n];
            for(int j=0; j<r; j++){
                int u, v;
                cin>>u>>v;
                vt[u].push_back(v);
                vt[v].push_back(u);
            }
            cin>>s>>d;
            int visited[n];
            int level[n];
            int mx = -1;
            for(int j=0; j<n; j++) visited[j]=-1;
            for(int j=0; j<n; j++){
                queue<int> q;
                q.push(j);
                visited[j] = j;
                level[j] = 0;
                while (!q.empty()){
                    int top = q.front();
                    q.pop();
                    for(int k=0; k<vt[top].size(); k++){
                        if(visited[vt[top][k]]!=j){
                            level[vt[top][k]] = level[top] + 1;
                            visited[vt[top][k]] = j;
                            q.push(vt[top][k]);
                        }
                    }
                }
                mx = max(mx, level[s]+level[d]);
            }
            cout << "Case " << i << ": " << mx << endl;
        }
    }
