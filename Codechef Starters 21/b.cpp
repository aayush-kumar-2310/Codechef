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
    
        int a,b; cin>>a>>b;

        if(b%2==0){
            if(a%2==0)
                cout<<(b/2)*(a/2)<<endl;
            else
                cout<<(b/2)*(a/2 +1)<<endl;
        }
        else{
            if(a%2==0)
                cout<<(b/2 +1)*(a/2)<<endl;
            else
                cout<<(b/2 +1)*(a/2+1)<<endl;
        }
    }
    return 0;
}
