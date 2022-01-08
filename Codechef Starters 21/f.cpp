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

bool isGood(int t, int sum, int median, int n){

    
    if( (sum+t)/n == median)
        return true;
    else
        return false;
}

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
        vector<int> arr(n);
        int median, sum=0;
        for(int i=0; i<n; i++)
            cin>>arr[i], sum+=arr[i];

        sort(all(arr));

        if(n%2!=0)
            median=arr[(n+1)/2];
        else
            median=arr[n/2];

        int l=0, r=100;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(isGood(mid, sum, median, n))
                r=mid-1;
            else
                l=mid+1;
        }
        cout<<l<<endl;
    }
    return 0;
}
