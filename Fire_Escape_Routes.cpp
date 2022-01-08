#include<bits/stdc++.h>
using namespace std;

long long int graphLength(int node, vector<int> adjList[], vector<int> &visited){

    visited[node] = 1;
    long long len = 1;
    queue<int> q;
    q.push(node);

    while(!q.empty()){

        int tmp = q.front();
        q.pop();

        for(auto it: adjList[tmp]){

            if(!visited[it]){
                len++;
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return len;
}

int main(){

    int t; cin>>t;

    while(t--){
        int nodes, edges; cin>>nodes>>edges;
        int cc = 0;
        long long ans = 1;
        vector<int> adjList[nodes+1], visited(nodes+1, 0);

        for(int i = 0; i<edges; i++){
            int a, b; cin>>a>>b;

            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        for(int i = 1; i<=nodes; i++){
            if(!visited[i]){
                cc++;
                ans = (ans*graphLength(i, adjList, visited)) % 1000000007;
            }
        }
        cout<<cc<<" "<<ans<<endl;
    }
    
}