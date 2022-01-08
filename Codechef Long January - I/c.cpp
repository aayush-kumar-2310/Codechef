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

// int ans=1;

// int calculate(int n){

//     if(n==0){
//         ans=1;
//         return 1;
//     }        

//     if(n<=10)
//         ans = 2*calculate(n-1);

//     else if(n>10)
//         ans= 3*calculate(n-1);
// }

int32_t main(){
    fast


    // I'll be there 1 day
    // 1 DAY :)


    int t=1;
    cin>>t;
    while(t--){
    
        int n, d, a; cin>>n>>d;

        if(d==0)
            cout<<1<<endl;
        else{
            if(d<=10){
                a=pow(2LL,min(10LL,d));
                cout<<min(a,n)<<endl;
            }

            else{
                a=1024;
                if(a>=n)
                    cout<<n<<endl;

                else{
                    a *= pow(3, (d-10));
                    if(a>=n)
                        cout<<n<<endl;
                    else
                        cout<<a<<endl;
                }
            }
                //cout<<min(n,a*pow(3, d-10))<<endl;

        }
    }
    return 0;
}
