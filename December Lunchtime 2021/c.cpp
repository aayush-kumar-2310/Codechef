#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        long long int n; cin>>n;
        vector<long long int> arr;

        for(long long int i = 0; i<n; i++){
            int x; cin>>x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());
        
        cout<<(arr[arr.size()-1]-arr[0])*arr[arr.size()-2]<<endl;
    }

}