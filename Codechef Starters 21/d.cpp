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

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    cin>>t;
    while(t--){
        
        int n; cin>>n;
        vector<int> ar;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            arr.pb(x);
        }

        vector<int> op(32);
        for(int i=0; i<n;i++)
            for(int j=0; j<32; j++)
                op[j] += ((arr[i] & (1<<j)) > 0);

        int ans=0;
        for(int i=0; i<32; i++)
            if(op[i] >1)
                ans |= (1<<i);

            cout<<ans<<endl;

    }
    return 0;
}
