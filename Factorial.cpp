#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){

        long long n; cin>>n;
        uint64_t ans = 1, cnt = 0;
        
        while(n){
            ans *= n;
            n--;
        }   

        while(1){
            if(ans%10 == 0)
                cnt++;
            else
                break;
        }
    }

}