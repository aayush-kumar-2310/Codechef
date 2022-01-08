#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){

    int t; cin>>t;

    while(t--){

        long long profit = 0;
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        sort(arr, arr+n);

        int cnt = 0;
        for(int i = n-1; i>=0; i--){
            profit += max(0, arr[i] - cnt);
            profit %= MOD;
            cnt++;
        }
        cout<<profit<<endl;
    }

}