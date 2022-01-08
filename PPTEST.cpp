#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        long long ans = 0;
        int N, W; cin>>N>>W;
        priority_queue<pair<int, int>> q;
        for(int i=0; i<N; i++){
            int a, b, c; cin>>a>>b>>c;
            q.push({a*b, c});
        }

        while(!q.empty() and W>=0){
            if(q.top().second <= W){
                ans += q.top().first;
                W -= q.top().second;
                q.pop();
            }
            else
                q.pop();
        }

        cout<<ans<<endl;
    }

}