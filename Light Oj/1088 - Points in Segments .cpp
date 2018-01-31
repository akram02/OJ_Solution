    #include<bits/stdc++.h>
    using namespace std;
    int binSearch(int ar[], int beg, int end, int find){
        int mid = (beg+end)/2;
        if(beg>=end) return end;
        if(ar[mid]>find) binSearch(ar, beg, mid-1, find);
        else binSearch(ar, mid+1, end, find);
    }
    int main() {
        //freopen("input.txt", "r", stdin);
        int t;
        scanf("%d", &t);
        for(int i=1; i<=t; i++){
            printf("Case %d:\n", i);
            int n, q;
            scanf("%d %d", &n, &q);
            int ar[n];
            for(int j=0; j<n; j++) scanf("%d", &ar[j]);
            for(int j=0; j<q; j++){
                int a, b;
                scanf("%d %d", &a, &b);
                if(a>ar[n-1] || b<ar[0]){
                    printf("%d\n", 0);
                    continue;
                }
                int start = binSearch(ar, 0, n-1, a);
                int x = start-1, y = start, z = start+1;
                if(x<0) x = 0;
                if(z>n-1) z = n-1;
                if(ar[x]>=a) start = x;
                else if(ar[y]>=a) start = y;
                else start = z;
     
                int end = binSearch(ar, 0, n-1, b);
                x = end-1, y = end, z = end+1;
                if(x<0) x = 0;
                if(z>n-1) z = n-1;
                if(ar[z]<=b) end = z;
                else if(ar[y]<=b) end = y;
                else end = x;
                printf("%d\n", end-start+1);
            }
        }
    }
