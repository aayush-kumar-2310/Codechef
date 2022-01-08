#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
bool isG=0, isR=0, ans=false;

string c; 
void dfs(int n, int parent, vector<int> &vis, vector<int> adjList[]){
        
    vis[n] = 1;
    if(c[n-1] == 'B' and isG==1 and isR==1 and parent != -1){
        ans=true;
        return;
    }

    if(c[n-1] == 'R') isR=1;
    if(c[n-1] == 'G') isG=1;

    for(auto it: adjList[n]){
        if(!vis[it]){
            dfs(it, n, vis, adjList);
        }
    }
    
    if(c[n-1] == 'R') isR=0;
    if(c[n-1] == 'G') isG=0;
    return;
}

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    cin>>t;
    while(t--){
        
        int nodes; cin>>nodes;
        vector<int> adjList[nodes+1], vis(nodes+1, 0);
        cin>>c;

        for(int i=1; i<=nodes-1; i++){
            int a,b; cin>>a>>b;
            adjList[a].pb(b);
            adjList[b].pb(a);
        }

        for(int i=0; i<nodes; i++)
            if(c[i] == 'B')
                dfs(i, -1, vis, adjList);

        if(ans==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
