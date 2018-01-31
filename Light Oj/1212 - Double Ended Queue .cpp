#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case "<<i<<":"<<endl;
        int n, m, x, c=0;
        deque<int> q;
        cin>>n>>m;
        for(int j=0; j<m; j++){
            string s;
            cin>>s;
            if(s=="pushLeft"){
                cin>>x;
                if(q.size()==n)
                    cout<<"The queue is full"<<endl;
                else {
                    q.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
 
            }
            else if(s=="pushRight"){
                cin>>x;
                if(q.size()==n)
                    cout<<"The queue is full"<<endl;
                else {
                    q.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            else if(s=="popLeft"){
                if(q.size()==0)
                    cout<<"The queue is empty"<<endl;
                else {
                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
            }
            else if(s=="popRight"){
                if(q.size()==0)
                    cout<<"The queue is empty"<<endl;
                else {
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
            }
        }
    }
 
    return 0;
}
