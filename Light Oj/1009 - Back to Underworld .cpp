    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        //freopen("input.txt", "r", stdin);
        int t;
        scanf("%d", &t);
        for(int i=1; i<=t; i++){
            int n;
            scanf("%d", &n);
            vector<int> vct[20001];
            int visited[20001], u, v;
            for(int k=0; k<20001; k++) visited[k] = -1;
            for(int j=0; j<n; j++){
                scanf("%d %d", &u, &v);
                visited[u]=0;
                visited[v]=0;
                vct[u].push_back(v);
                vct[v].push_back(u);
            }
            int ans = 0;
            for(int m=0; m<20001; m++){
                if(visited[m] != 0) continue;
                visited[m] = 1;
                queue<int> q;
                q.push(m);
                int one=0, two=0;
                while (!q.empty()){
                    int top = q.front();
                    if(visited[top]==1) one++;
                    else two++;
                    q.pop();
                    int sz = vct[top].size();
                    for(int a=0; a<sz; a++){
                        int x = vct[top][a];
                        if(visited[x]==0){
                            if(visited[top]==1) visited[x]=2;
                            else visited[x]=1;
                            q.push(x);
                        }
                    }
                }
                ans += max(one, two);
            }
            printf("Case %d: %d\n", i, ans);
        }
    }
