#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n; cin>>n;
        long long int s = 0;
        vector<int> arr;

        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        for(int i = arr.size()-1; i>0; i--)
            s += arr[i];

        cout<<s<<endl;
    }

}